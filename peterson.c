#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

int flag[2] = {0, 0};
int turn = 0;
int shared_resource = 0;

void critical_section(int process_id) {
    printf("Process %d is in critical section\n", process_id);
    shared_resource++;
    printf("Process %d modified shared_resource to: %d\n", process_id, shared_resource);
    sleep(1);
}

void non_critical_section(int process_id) {
    printf("Process %d is in non-critical section\n", process_id);
    sleep(1);
}

void enter_critical_section(int process_id) {
    int other = 1 - process_id;
    flag[process_id] = 1;
    turn = other;
    while (flag[other] == 1 && turn == other);
}

void exit_critical_section(int process_id) {
    flag[process_id] = 0;
}

void* process(void* arg) {
    int process_id = *(int*)arg;
    for (int i = 0; i < 3; i++) {
        enter_critical_section(process_id);
        critical_section(process_id);
        exit_critical_section(process_id);
        non_critical_section(process_id);
    }
    return NULL;
}

int main() {
    pthread_t threads[2];
    int process_ids[2] = {0, 1};
    
    printf("Starting Peterson's Algorithm Demonstration\n");
    
    for (int i = 0; i < 2; i++) {
        if (pthread_create(&threads[i], NULL, process, &process_ids[i]) != 0) {
            perror("Failed to create thread");
            return 1;
        }
    }
    
    for (int i = 0; i < 2; i++) {
        if (pthread_join(threads[i], NULL) != 0) {
            perror("Failed to join thread");
            return 1;
        }
    }
    
    printf("Final value of shared_resource: %d\n", shared_resource);
    printf("Program completed successfully\n");
    
    return 0;
}