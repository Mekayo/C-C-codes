#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// =========================================
void insert_At_head(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head; // Correctly point the new node to the current head
    head = temp;       // Update head to the new node
}

// =========================================
void insert_At_tail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp; // Link the current tail to the new node
    tail = temp;       // Update tail to the new node
}
// =========================================
Node* delete_node(Node* &head ){
Node* temp=head;
head=head->next;
delete temp;
return head;
}

// =========================================
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

//***********************************************************
int main() {
    // ----------------------------------------------
    int data;
    cout << "Enter data for the first node: ";
    cin >> data;

    Node* nodeH = new Node(data);
    Node* head = nodeH;
    Node* tail = nodeH; // Initialize tail to the first node
    printList(head);
    printList(tail);

 // ----------------------------------------------
string s;
cout<<"want to insert at head"<<endl;
cin>>s;
 if(s=="yes"){// Insert at head
    int newdata;
    cout << "\nEnter data newnode inserting at head: "<<endl;
    cin >> newdata;

    insert_At_head(head, newdata);

    cout << "Linked list after inserting at head: ";
    printList(head);
    printList(tail);
} 
 // ----------------------------------------------
    // Insert at tail
    int data2;
    cout << "\nEnter data for tail: ";
    cin >> data2;

    insert_At_tail(tail, data2);
 
    cout << "\nLinked list after inserting at tail: \n";
    printList(head);
    printList(tail);


 // ----------------------------------------------
    // Verify tail and head
    cout<<"data at head: "<< head->data<<endl;
    cout << "Data at tail: " << tail->data << endl;
    
    if (tail->next != NULL) {
        cout << "Tail's next data: " << tail->next->data << endl;
    } else {
        cout << "Tail's next: NULL" << endl;
    }
 // ----------------------------------------------
 cout<<endl;   
 delete_node(head);
    printList(head);
    return 0;
}