// in this program we pointing the head element and && tail element of linked list to the NULL (in decending order or ascending order )
#include<iostream>
using namespace std;
class Node{

public:
int data;
Node* next;

//consturctor called
Node(int data)
{
    this->data=data;
    this->next=NULL;
}


};


//pionting new head to tail and tail to NULL 
void insertAtTail(Node* &tail, int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
//pointing head to NULL where head is an  first element which will be insert eg- 10 then answer will be 15 12 10-->null
void insertAtHead(Node* &head,int d){
    Node* temp =new Node(d);
    temp->next=head;
    head=temp;
}
void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
        cout<<endl;
}

void insertAtMiddle(Node* &tail, Node* &head, int position, int d) {
    // Insert at first
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    // Traverse to the position or stop if the end of the list is reached
    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    // If position is beyond the current list length, insert at the tail
    if (temp == NULL || temp->next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    // Insert in the middle
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

//deletion
void deleteNode(int position,Node* &head){
 if(position==1){
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;

 }


Node* curr=head;
Node* prev=NULL;
 
 int cnt=1;
 while(cnt<position){
    prev=curr;
    curr=curr->next;
    cnt++;
}

prev->next=curr->next;
//curr ke next ko NULL k equal ismliy akara hai (to avoid deletion of all nodes in linked list )

curr->next=NULL;
// curr is the element which have to delete by the call 
delete curr;



}



int main(){
     //class called
     Node* node1=new Node(10);
    //  cout<<node1->data<<endl;
    //  cout<<node1->next<<endl;

    Node* head=node1;
    Node* tail=node1;

cout<<"before"<<endl;
    print(head);
cout<<endl;
cout<<"after--->"<<endl;
        insertAtTail(tail,12);
            print(head);
         insertAtTail(tail,15);
            print(head);    

        insertAtTail(tail,20);
            print(head);
        insertAtMiddle(tail,head,5,25);
        print(head);




        cout<<" head: "<<head->data<<endl;
 cout<<"tail: "<<tail->data<<endl;


        cout<<endl<<"after deleting the node "<<endl;
        int no;
    cout<<"enter no of node 1-5:";
        cin>>no;
      deleteNode(no,head);
    print(head);
 cout<<" head: "<<head->data<<endl;
 cout<<"tail: "<<tail->data<<endl;
    return 0;
}