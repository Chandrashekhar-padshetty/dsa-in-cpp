#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        next = nullptr;
    }
};

void insert(node *&tail, int d) {
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}

int lengthofll(node* head) {
    node* temp = head;
    int cnt = 0;
    while(temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

node* deleteatmid(node *head) {
    int n = lengthofll(head);
    
    if (n == 0 || n == 1) return head; // No deletion if list is empty or has only one node.
    
    int mid = n / 2; // mid-point of the linked list
    node* temp = head;
    node* prev = NULL;
    
    // Traverse to the middle node
    for(int i = 0; i < mid; i++) {
        prev = temp;
        temp = temp->next;
    }
    
    if (prev != NULL && temp != NULL) {
        prev->next = temp->next; // Link previous node to next of the middle node
        delete temp; // Delete middle node
    }
    
    return head;
}

void traversal(node* head) {
    node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* head = new node(10);
    node* tail = head;
    
    insert(tail, 67);
    insert(tail, 7);
    insert(tail, 76);
    insert(tail, 56);
    insert(tail, 88);
    insert(tail, 44);
    insert(tail, 44);
    insert(tail, 6);
    
    cout << "Before deletion: ";
    traversal(head);
    
    head = deleteatmid(head);  // Fix: use the updated head after deletion
    
    cout << "After deletion: ";
    traversal(head);

    return 0;
}
