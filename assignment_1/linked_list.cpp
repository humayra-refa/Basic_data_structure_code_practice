#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

int main(){
    Node* head = nullptr;
    Node* tail = nullptr;
    int val;
    
    while(cin >> val && val != -1){
        Node* newNode = new Node(val);
        if(!head) head = tail = newNode;
        else { tail->next = newNode; tail = newNode; }
    }
    
    int maxVal = INT_MIN, minVal = INT_MAX;
    Node* curr = head;
    while(curr){
        maxVal = max(maxVal, curr->data);
        minVal = min(minVal, curr->data);
        curr = curr->next;
    }
    
    cout << maxVal - minVal;
}