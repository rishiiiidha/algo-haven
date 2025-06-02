#include <iostream>
#include <vector>
#include <queue>
using namespace std;


void bfstraversal(vector<int> edges[], int vertex, int source) {
    vector<bool> visited(vertex, false);
    queue<int> q;
    q.push(source);
    visited[source] = true; 

    while (!q.empty()) {
        int k = q.front();
        q.pop();
        cout << k << " ";

        for (int i : edges[k]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    int vertex = 6; 
    vector<int> edges[6]; 
    edges[0].push_back(1);
    edges[0].push_back(2);
    
    edges[1].push_back(0);
    edges[1].push_back(3);
    
    edges[2].push_back(0);
    edges[2].push_back(4);
    
    edges[3].push_back(1);
    edges[3].push_back(5);
    
    edges[4].push_back(2);
    
    edges[5].push_back(3);

    cout << "BFS Traversal starting from node 0: ";
    bfstraversal(edges, vertex, 0);
    cout << endl;

    return 0;
}