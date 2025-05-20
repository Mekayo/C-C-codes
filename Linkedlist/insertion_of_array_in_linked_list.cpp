#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor with default value for next
    Node(int data, Node* next1 = nullptr) {
        this->data = data;
        this->next = next1;
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
Node* delete_tail(Node* &head){
    if(head==NULL || head->next==NULL) 
        return NULL;

    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head;
}

// =========================================
Node* remove_node(Node* &head,int el){
 if(head==NULL || head->next==NULL) return head;
    
 if(head->data==el){
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
 }

Node* temp=head;
Node* prev=NULL;
while (temp->next!=NULL)
{
    if(temp->data==el){
        prev->next=prev->next->next;
        free(temp);
        break;
    }
    prev=temp;
    temp=temp->next;
}

}
// Standal one function to convert an array to a linked list
Node* convertArr(vector<int>& arr) {
    if (arr.empty()) return nullptr; // Handle empty array case

    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]); // Fixed extra parenthesis
        cout<<temp->data<<",";
        mover->next = temp;
        mover = temp;
    }
    cout<<"\n"<<endl;
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    vector<int> arr = {0, 5, 6, 8, 7};

    Node* head = convertArr(arr);
    insert_At_head(head,-1);
    printList(head);

    cout<<endl;
    if (head) {
        cout << "Head of the node: " << head->data << endl;
    } else {
        cout << "The array is empty, no linked list created." << endl;
    }

    // delete_node(head);
    
    // delete_tail(head);          
        remove_node(head,5);
        remove_node(head,-1);
        
    printList(head);
    return 0;
}