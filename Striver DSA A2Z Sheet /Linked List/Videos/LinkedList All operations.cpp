#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    public:
    Node(){
        data = 0;
        next = nullptr;
    }
    Node(int data ){
        this->data = data;
        next = nullptr;
    }
    Node(int data , Node* next){
        this->data = data;
        this->next = next;
    }
};
Node *createLinkedList(int arr[],int n){
    Node *head = nullptr;
    Node *prev = nullptr;
    for (int i = 0; i < n; i++)
    {
        Node* temp = new Node(arr[i]);
        if (head == nullptr)
        {
            head = temp;
            prev = head;
        }
        else
        {
            prev->next = temp;
            prev = temp;
        }
    }

    return head;
}
void printLinkedList(Node* head){
    Node *temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int LengthOfLinkedList(Node* head){
    int cnt = 0;
    Node *temp = head;
    while(temp){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
Node* deleteAtBegin(Node *head){
    if(head==nullptr)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node* deleteAtEnd(Node* head){
    if(head ==nullptr)
        return head;
    Node *temp = head;
    while(temp->next->next!=nullptr){
        temp = temp->next;
    }
    temp->next = nullptr;
    Node *garbage = temp->next;
    delete garbage;
    return head;
}
Node* deleteAtPositionFromBegining(Node* head, int kStart,int n){
    int cnt = 0;
    Node *temp = head;
    Node *prev = nullptr;
    while (temp != nullptr && cnt < n)
    {
        if(cnt==kStart){
            if(prev!=nullptr){
            prev->next = temp->next;
            delete temp;
            return head;
            }
            else{
                return deleteAtBegin(head);
            }
        }
        prev = temp;
        temp = temp->next;
        cnt++;
    }
}
Node* deleteAtPositionFromEnd(Node* head,int kEnd){
    int n = LengthOfLinkedList(head);
    
}
Node* deleteTheValue(Node* head,int value){

}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    Node *head = createLinkedList(arr, 5);
    // printLinkedList(head);
    head =  deleteAtBegin(head);  // returns new head
    printLinkedList(head);
    head = deleteAtEnd(head);
    printLinkedList(head);
    head = deleteAtPositionFromBegining(head, 2,5); // 0 based indexing
    printLinkedList(head);

}