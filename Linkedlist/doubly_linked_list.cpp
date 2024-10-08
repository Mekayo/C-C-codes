// doubly liked list insertion and getlength 

  #include<iostream>
  using namespace std;

  class Node
  {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

  };
  
  /*printing */

  void print(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<< temp->data<<" ";
            temp=temp->next;
      }
    cout<<endl;
     }
     /*to count length*/

    int givelength(Node* head){
     int lnth=0;
        Node* temp=head;
        while(temp!=NULL){
        lnth++;
        temp=temp->next ;
      }
      return lnth;  
     }
/*insertion at head */
  
    void insertAthead(Node* &head,Node*&tail, int d){
      /*if head is pointing at NULL*/
      if(head==NULL){
          Node* temp=new Node(d);
          head=temp;
          tail=temp;
      }
      else{
      Node* temp=new Node(d);
      temp->next=head;
      head->prev=temp;
      head=temp;
      }
      
     }
 

/* insertion at tail*/
      
        void insertAttail(Node* &head,Node* &tail,int d){
       if(tail==NULL){
        Node* temp=new Node(d);
      tail=temp;
      head=temp;
       }
       
        else{Node*temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
      }

}
void insertionAtPostion(Node* &tail,Node* &head,int postion,int d){
 
if(postion==1){
    insertAthead(head,tail,d);
    return;
} 
Node* temp=head;


int cnt=1;
while(cnt<postion -1){
   temp= temp->next;
    cnt++;

}

//insert at last pointing tail to last data enter if we call to insert at end last position

if(temp->next==NULL){
    insertAttail(head,tail,d);
    return;
}
Node* nodetoinsert=new Node(d);
nodetoinsert->next=temp->next;
temp->next->prev=nodetoinsert;
temp->next=nodetoinsert;
nodetoinsert->prev=temp;
}
//changes has to be done---> for deletions
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
 
Node* head= NULL;
Node* tail=NULL;

cout<<endl;cout<<endl;cout<<endl;
  print(head);
  cout<<" length of a linked list : "<<givelength(head)<<endl;


insertAthead(head,tail,11);
print(head);
   

cout<<"inserting at tail->"<<endl;

insertAttail(head,tail,14);
print(head);

cout<<"insertion at position"<<endl;

insertionAtPostion(tail,head,2,12);
print(head);

insertionAtPostion(tail,head,4,15);
print(head);


 cout<<endl<<" length of a linked list : "<<givelength(head)<<endl;

insertionAtPostion(tail,head,5,16);
print(head);

cout<<"head: "<<head->data<<endl;
cout<<"Tail: "<<tail->data<<endl;


cout<<"\t\t\t\tchummaaa!!!!baabbiie"<<endl;
cout<<endl;cout<<endl;cout<<endl;
    return 0;
  }