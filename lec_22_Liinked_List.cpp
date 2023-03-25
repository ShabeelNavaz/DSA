/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    // Constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
int main(){
  // Object Creation
  Node* first = new Node(3);
  cout<<first->data <<endl;
  cout<<first->next <<endl;  
return 0;
}
*/

// Inseart At Head
/*

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};
  void insertAtHead(Node* &head, int d){
    // step 1: Create new node
    Node* newNode = new Node(d);
    // step 2: set Next ptr to head node
    newNode->next = head;
    // step 3: head update
    head = newNode;
  }

  void traverse(Node* &head){
    Node* temp = head;
    while(temp != NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
    }
    cout<<endl;
  }
int main(){
    Node* b=new Node(3);
    Node* head=b;

    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,7);
    insertAtHead(head,8);

    traverse(head);
return 0;
}
*/

// Inseart At Tail
/*

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};
  void insertAtTail(Node* &tail, int d){
    // step 1: Create new node
    Node* newNode = new Node(d);
    // step 2: set Next ptr to tail node
    tail->next = newNode;
    // step 3: head update
    tail = newNode;
  }

  void traverse(Node* &head){
    Node* temp = head;
    while(temp != NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
    }
    cout<<endl;
  }
int main(){
    Node* b=new Node(3);
    Node* head=b;
    Node* tail=b;

    insertAtTail(tail,5);
    insertAtTail(tail,6);
    insertAtTail(tail,7);
    insertAtTail(tail,8);

    traverse(head);
return 0;
}
*/

// Insert At Position
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};

  void insertAtHead(Node* &head, int d){
    // step 1: Create new node
    Node* newNode = new Node(d);
    // step 2: set Next ptr to head node
    newNode->next = head;
    // step 3: head update
    head = newNode;
  }

  void insertAtTail(Node* &tail, int d){
    // step 1: Create new node
    Node* newNode = new Node(d);
    // step 2: set Next ptr to tail node
    tail->next = newNode;
    // step 3: head update
    tail = newNode;
  }

  void insertAtPosition(Node* &head,int pos,int d){
    if(pos == 1){
        insertAtHead(head,d);      
    }
    else{
      // Step 1: Creation of New Node
      Node* newNode = new Node(d);
      // Step 2: 
      Node* prev = head;
      int t = pos-1;
      while(t--){
        prev = prev->next;
      }
      // Step 3: connectiom update
      newNode->next = prev->next;
      prev->next = newNode;
    }
  }

  void traverse(Node* &head){
    Node* temp = head;
    while(temp != NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
    }
    cout<<endl;
  }
int main(){
    Node* b=new Node(3);
    Node* head=b;
    Node* tail=b;

    insertAtTail(tail,5);
    insertAtTail(tail,6);
    insertAtTail(tail,7);
    insertAtTail(tail,8);

    traverse(head);

    insertAtPosition(head,3,10);

    traverse(head);
return 0;
}
*/

// Deletion
/*

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};
  // Inseart At Head
  void insertAtHead(Node* &head, int d){
    // step 1: Create new node
    Node* newNode = new Node(d);
    // step 2: set Next ptr to head node
    newNode->next = head;
    // step 3: head update
    head = newNode;
  }
  // Inseart At Tail
  void insertAtTail(Node* &tail, int d){
    // step 1: Create new node
    Node* newNode = new Node(d);
    // step 2: set Next ptr to tail node
    tail->next = newNode;
    // step 3: head update
    tail = newNode;
  }
  Inseart At Position
  void insertAtPosition(Node* &head,int pos,int d){
    if(pos == 1){
        insertAtHead(head,d);      
    }
    else{
      // Step 1: Creation of New Node
      Node* newNode = new Node(d);
      // Step 2: 
      Node* prev = head;
      int t = pos-1;
      while(t--){
        prev = prev->next;
      }
      // Step 3: connectiom update
      newNode->next = prev->next;
      prev->next = newNode;
    }
  }
    // Delete Node
    void deleteNode(Node* &head,int target, int pos){
      // Empty List
      if(head == NULL){
        return;
      }
      Node* temp= head;
      Node* prev = NULL;
      if(target == temp->data && pos ==1){
      head = head->next;
      temp->next = NULL;
      delete temp;
      }
      else{

          while(temp != NULL &&temp->data != target){
            prev = temp;
            temp = temp->next;
          }
          if(temp == NULL){
            cout<<"Node is not found"<<endl;
          }
          prev->next = temp->next;
          temp->next = NULL;
          delete temp;
      }
    }
  // Traverse Node
  void traverse(Node* &head){
    Node* temp = head;
    while(temp != NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
    }
    cout<<endl;
  } 
  // Length
  int getLength(Node* &head){
    Node* temp=head;
    int len = 0;
    while(temp != NULL){
      len++;
      temp = temp->next;
    }
    return len;
  }
int main(){
    Node* b=new Node(3);
    Node* head=b;
    Node* tail=b;

    insertAtTail(tail,5);
    insertAtTail(tail,6);
    insertAtTail(tail,7);
    insertAtTail(tail,8);
    traverse(head);

    insertAtPosition(head,3,10);
    traverse(head);

    Node* head2 =NULL;
    deleteNode(head2,34,1);
    traverse(head);

    cout<<getLength(head)<<endl;
return 0;
}
*/

//--------------------------------------- Double Link List
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
 // Node* head;
  Node* prev;
  Node* next;
  
  Node(int d){
    this->data=d;
    this->next=NULL;
  }
};

void inseartAtHead(Node* &head, int d){
  Node* newNode = new Node(d);
  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}

void inseartAtTail(Node* &tail,int d){
  Node* newNode = new Node(d);
  tail->next=newNode;
  newNode->prev=tail;
  tail=newNode;
}

void inseartAtPosition(Node* &head,int pos, int d){
  if(position == 1){
    inseartAtHead(head,d);
  }
  else{
  Node* newNode=new Node(d);
  newNode->next= prev->next;
  newNode->next->prev=newNode;
  prev->next=newNode;
  newNode->prev=prev;
 }
}

void travers(Node* &head){
  Node* temp=head;
  while(temp != NULL){
    cout<<temp->data<<" ";
    temp= temp->next;
  }
  cout<<endl;
}


int main(){

Node* b = new Node(3);
Node* head= b;
Node* tail=b;
inseartAtHead(head,5);    
inseartAtHead(head,4);
inseartAtHead(head,8);
inseartAtTail(tail,4);
inseartAtTail(tail,9);
inseartAtPosition(head,3,10);
travers(head);
return 0;
}
*/

// Reverse a linked list

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};

  void insertAtHead(Node* &head, int d){
    // step 1: Create new node
    Node* newNode = new Node(d);
    // step 2: set Next ptr to head node
    newNode->next = head;
    // step 3: head update
    head = newNode;
  }

  void insertAtTail(Node* &tail, int d){
    // step 1: Create new node
    Node* newNode = new Node(d);
    // step 2: set Next ptr to tail node
    tail->next = newNode;
    // step 3: head update
    tail = newNode;
  }

  void insertAtPosition(Node* &head,int pos,int d){
    if(pos == 1){
        insertAtHead(head,d);      
    }
    else{
      // Step 1: Creation of New Node
      Node* newNode = new Node(d);
      // Step 2: 
      Node* prev = head;
      int t = pos-1;
      while(t--){
        prev = prev->next;
      }
      // Step 3: connectiom update
      newNode->next = prev->next;
      prev->next = newNode;
    }
  }

    void deleteNode(Node* &head,int target, int pos){
      // Empty List
      if(head == NULL){
        return;
      }
      Node* temp= head;
      Node* prev = NULL;
      if(target == temp->data && pos ==1){
      head = head->next;
      temp->next = NULL;
      delete temp;
      }
      else{

          while(temp != NULL &&temp->data != target){
            prev = temp;
            temp = temp->next;
          }
          if(temp == NULL){
            cout<<"Node is not found"<<endl;
          }
          prev->next = temp->next;
          temp->next = NULL;
          delete temp;
      }
    }

  void traverse(Node* &head){
    Node* temp = head;
    while(temp != NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
    }
    cout<<endl;
  } 

  int getLength(Node* &head){
    Node* temp=head;
    int len = 0;
    while(temp != NULL){
      len++;
      temp = temp->next;
    }
    return len;
  }

  
Node* reverse(Node* &head){
  Node* curr = head;
  Node* prev = NULL;
  while(curr != NULL){
    Node* forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;
  }
  return prev;
}

Node* reverseRec(Node* &curr , Node* prev){
  // Base Case 
  if(curr == NULL){
    return prev;
  }
  // connection change
  Node* forward = curr -> next;
  curr -> next = prev;

  //call recursion
  return reverseRec(forward , curr);
}
int main(){
    Node* b=new Node(3);
    Node* head=b;
    Node* tail=b;

    insertAtTail(tail,5);
    insertAtTail(tail,6);
    insertAtTail(tail,7);
    insertAtTail(tail,8);
    traverse(head);

    insertAtPosition(head,3,10);
    traverse(head);

    Node* head2 =NULL;
    deleteNode(head2,34,1);
    traverse(head);

    cout<<getLength(head)<<endl;
    head = reverseRec(head,NULL);
    traverse(head);

return 0;
}
*/

// Get Middle
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};

  void insertAtHead(Node* &head, int d){
    // step 1: Create new node
    Node* newNode = new Node(d);
    // step 2: set Next ptr to head node
    newNode->next = head;
    // step 3: head update
    head = newNode;
  }

  
  void traverse(Node* &head){
    Node* temp = head;
    while(temp != NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
    }
    cout<<endl;
  } 

  Node* getMiddle(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast != NULL && fast -> next != NULL){
    fast=fast -> next -> next;
    slow=slow ->next;
  }
    return slow;
  };
int main(){
    Node* b=new Node(3);
    Node* head=b;
    Node* tail=b;

    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,7);
    insertAtHead(head,8);
    insertAtHead(head,15);
   traverse(head);
  
  Node* middle= getMiddle(head);
  cout<<"Middle is at "<< middle -> data<<endl;
return 0;
}
*/

//  Check linked list Circular or not 
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};

  void insertAtHead(Node* &head, int d){
    // step 1: Create new node
    Node* newNode = new Node(d);
    // step 2: set Next ptr to head node
    newNode->next = head;
    // step 3: head update
    head = newNode;
  }

  
  void traverse(Node* &head){
    Node* temp = head;
    while(temp != NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
    }
    cout<<endl;
  } 

  bool isCircular(Node* &head){
    Node* temp = head;
    while(temp != NULL){
      if(temp->next == head){
        return true;
      }
      temp = temp->next;
    }
    return false;
  }
int main(){
    Node* b=new Node(3);
    Node* head=b;
    Node* tail=b;

    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,7);
    insertAtHead(head,8);
    insertAtHead(head,15);
   traverse(head);
   int ans = isCircular(head);
   head->next=head;
    cout<<"Circular or not "<<isCircular(head)<<endl;
  
  return 0;
}
*/

// Reverse linked list in k group
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};

  void insertAtHead(Node* &head, int d){
    // step 1: Create new node
    Node* newNode = new Node(d);
    // step 2: set Next ptr to head node
    newNode->next = head;
    // step 3: head update
    head = newNode;
  }
  
  
  void insertAtTail(Node* &tail, int d){
    // step 1: Create new node
    Node* newNode = new Node(d);
    // step 2: set Next ptr to tail node
    tail->next = newNode;
    // step 3: head update
    tail = newNode;
  }

  void traverse(Node* &head){
    Node* temp = head;
    while(temp != NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
    }
    cout<<endl;
  } 

  Node* reverseInK(Node* &head,int k){
    // empty list
    if(head == NULL){
      return NULL;
    }
     Node* curr = head;
     Node* next = NULL;
     Node* prev = NULL;
     int count = 0;

     // Reverse frist K node
     while(curr != NULL && count < k ){
      next = curr->next;
      curr -> next = prev;
      prev = curr;
      curr = next;
      count++;
     }

     // Aage Recursion dekhega
     if(next != NULL){
      head->next = reverseInK(next,k);

     }
     return prev;
  }
  
int main(){
    Node* b=new Node(3);
    Node* head=b;
    Node* tail=b;
      insertAtHead(head,5);
      insertAtHead(head,6);
      insertAtHead(head,7);
      insertAtHead(head,8);
      insertAtHead(head,9);
      insertAtHead(head,12);
      insertAtHead(head,23);
      insertAtHead(head,24);
    // insertAtTail(tail,5);
    // insertAtTail(tail,6);
    // insertAtTail(tail,7);
    // insertAtTail(tail,8);
    // insertAtTail(tail,15);
    // insertAtTail(tail,10);
   traverse(head);
  
   head = reverseInK(head,3);
   traverse(head);
  return 0;
}
*/

// Merge tow sorted Array
/*
#include<iostream>
using namespace std;

class Node {

    //Data Member are below:
    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this->data  = data;
        this->next = NULL;
    }

};

void insertAtHead(Node* &head, int d) {
        //step 1: create new node
        Node* newNode = new Node(d);
        //step2: set next ptr to head node
        newNode->next = head;
        //step3: head update;
        head = newNode;
}

void insertAtTail(Node* &tail, int d) {
        //step 1: cration of Node
        Node* newNode = new Node(d);
        //step2: 
        tail->next = newNode;
        //step3: head update;
        tail = newNode;
}

void insertAtPosition(Node* &head, int pos, int d) {
    //TODO: tail updation, while inserting node at the end
    //TODO: validate that position should 
    //be atmax 1 more than current Lenght of LL
    if(pos == 1) {
        insertAtHead(head,d);
    }
    else {
        //Step1: cration of New Node
        Node* newNode = new Node(d);

        //step2: 
        Node* prev = head;
        int t = pos-2;
        while(t--)
        {
            prev= prev->next;
        }

        //step3: connections update
        newNode->next = prev->next;
        prev->next = newNode;
    }
}

void traverse(Node* &head) {
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp ->next;
    }
    cout << endl;
}


void deleteNode(Node* &head, int target, int pos) {

    //empty list
    if(head == NULL)
        return;

    Node* temp = head;
    Node* prev = NULL;
    if(target == temp->data && pos == 1){
        head  = head ->next;
        temp -> next = NULL;
        delete temp;
    }
    else{

        while(temp != NULL && temp->data != target) {
            prev = temp;
            temp = temp->next;
        }
        //here we are assuiming that we have found the element

        if(temp == NULL)
            {
                cout << "NOde node found" << endl;
                return;
            }
        prev -> next = temp->next;
        temp ->next = NULL;
        delete temp;

    }

}


Node* merge(Node* &head1, Node* &head2) {
    
    if(head1 == NULL)
        return head2;

    if(head2 == NULL)
        return head1;
    
    Node* temp1 = head1;
    Node* temp2 = head2;

    Node* dummy = new Node(-1);
    Node* tempDummy = dummy;

    while(temp1 != NULL && temp2 != NULL) {

        if(temp1 -> data <= temp2 ->data) {
            tempDummy -> next = temp1;
            tempDummy = temp1;
            temp1 = temp1->next;
        }
        else{
            tempDummy -> next = temp2;
            tempDummy = temp2;
            temp2 = temp2->next;
        }
    }

    //it is possible that elements are left in temp1 list
    while(temp1 != NULL) {
         tempDummy -> next = temp1;
            tempDummy = temp1;
            temp1 = temp1->next;
    }

        //it is possible that elements are left in temp2 list
    while(temp2 != NULL) {
         tempDummy -> next = temp2;
            tempDummy = temp2;
            temp2 = temp2->next;
    }

    
    Node* head = dummy->next;
    
    //delete dummy node
    dummy->next = NULL;
    delete dummy;

    return head;
}

int countKfromLast(Node* &head,int k){
  // base case
  if(head == NULL)
  return 0;
  int cnt= countKfromLast(head->next,k)+1;
  if(cnt == k)
  cout<<"Kth Node from end is "<<head->data<<endl;
  return cnt;
}

int main() {

    //object creation

    Node* b = new Node(3);
    Node* head = b;
    Node* tail = b;

    insertAtTail(tail,5);
    insertAtTail(tail,7);
    insertAtTail(tail,9);
    insertAtTail(tail,11);
    insertAtTail(tail,13);
    insertAtTail(tail,14);
    insertAtTail(tail,15);

    countKfromLast(head,2);

    // traverse(head);
    // insertAtPosition(head, 6, 12);
    // traverse(head);

    // Node* head2 = NULL;
    // deleteNode(head2, 13, 1);
    // traverse(head);
    // cout << "legnth: " << getLength(head) << endl;

    // // head = reverseRec(head, NULL);
    // // traverse(head);

    // Node* middle = getMiddle(head);
    // cout << "Middle is at " << middle->data << endl;
    // //to make circular
    // //head -> next  = head;
    // cout << "Circular or not " << isCircular(head) << endl;

    // traverse(head);
    // head = reverseInK(head, 3);
    // traverse(head);

    // Node* head1 = new Node(1);
    // Node* tail1 = head1;
    // insertAtTail(tail1, 3);
    // insertAtTail(tail1, 5);

    // cout << "Priting first list " << endl;
    // traverse(head1);

    // Node* head2 = new Node(2);
    //  Node* tail2 = head2;
    // insertAtTail(tail2, 4);
    // insertAtTail(tail2, 6);
    // insertAtTail(tail2, 8);
    // insertAtTail(tail2, 10);

    // traverse(head2);

    // Node* head = merge(head1, head2);
    // traverse(head);


    // return 0;
}
*/

// Print kth mnode from end of linked list

/*

#include<iostream>
using namespace std;

class Node {

    //Data Member are below:
    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this->data  = data;
        this->next = NULL;
    }

};

void insertAtHead(Node* &head, int d) {
        //step 1: create new node
        Node* newNode = new Node(d);
        //step2: set next ptr to head node
        newNode->next = head;
        //step3: head update;
        head = newNode;
}

void insertAtTail(Node* &tail, int d) {
        //step 1: cration of Node
        Node* newNode = new Node(d);
        //step2: 
        tail->next = newNode;
        //step3: head update;
        tail = newNode;
}

void insertAtPosition(Node* &head, int pos, int d) {
    //TODO: tail updation, while inserting node at the end
    //TODO: validate that position should 
    //be atmax 1 more than current Lenght of LL
    if(pos == 1) {
        insertAtHead(head,d);
    }
    else {
        //Step1: cration of New Node
        Node* newNode = new Node(d);

        //step2: 
        Node* prev = head;
        int t = pos-2;
        while(t--)
        {
            prev= prev->next;
        }

        //step3: connections update
        newNode->next = prev->next;
        prev->next = newNode;
    }
}

void traverse(Node* &head) {
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp ->next;
    }
    cout << endl;
}


int countKfromLast(Node* &head,int k){
  // base case
  if(head == NULL)
  return 0;
  int cnt= countKfromLast(head->next,k)+1;
  if(cnt == k)
  cout<<"Kth Node from end is "<<head->data<<endl;
  return cnt;
}

int main() {

    //object creation

    Node* b = new Node(3);
    Node* head = b;
    Node* tail = b;

    insertAtTail(tail,5);
    insertAtTail(tail,7);
    insertAtTail(tail,9);
    insertAtTail(tail,11);
    insertAtTail(tail,13);
    insertAtTail(tail,14);
    insertAtTail(tail,15);

    countKfromLast(head,2);

return 0;
}
*/

// Detect and selete Loop
/*
#include<iostream>
using namespace std;

class Node {

    //Data Member are below:
    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this->data  = data;
        this->next = NULL;
    }

};

void insertAtHead(Node* &head, int d) {
        //step 1: create new node
        Node* newNode = new Node(d);
        //step2: set next ptr to head node
        newNode->next = head;
        //step3: head update;
        head = newNode;
}

void insertAtTail(Node* &tail, int d) {
        //step 1: cration of Node
        Node* newNode = new Node(d);
        //step2: 
        tail->next = newNode;
        //step3: head update;
        tail = newNode;
}

void insertAtPosition(Node* &head, int pos, int d) {
    //TODO: tail updation, while inserting node at the end
    //TODO: validate that position should 
    //be atmax 1 more than current Lenght of LL
    if(pos == 1) {
        insertAtHead(head,d);
    }
    else {
        //Step1: cration of New Node
        Node* newNode = new Node(d);

        //step2: 
        Node* prev = head;
        int t = pos-2;
        while(t--)
        {
            prev= prev->next;
        }

        //step3: connections update
        newNode->next = prev->next;
        prev->next = newNode;
    }
}

void traverse(Node* &head) {
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp ->next;
    }
    cout << endl;
}

Node* detectLoop(Node* &head){
  if(head == NULL)
    return NULL;
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast -> next != NULL){
      slow = slow->next;
      fast = fast->next->next;
      if(slow == fast)
        return slow;
  }
      return NULL;
}
bool detectAndDeleteLoop(Node* &head) {

    if(head == NULL)
        return false;

    //Step1: detect if loop is present or not
    Node* fast = detectLoop(head);
    if(fast == NULL){
      cout<<"Loop is not there "<<endl;
      return true;
    }

    //Step2: detect beginning node

    Node* slow = head;

    while(fast != slow) {
        slow = slow ->next;
        fast = fast ->next;
    }

    Node* beginningNode = slow;
    //step3: remove the loop connection
    Node* temp = beginningNode;

    while(temp ->next != beginningNode) {
        temp = temp->next;
    }
    temp ->next = NULL;
    return true;
}


int main() {
    //object creation

    Node* b = new Node(3);
    Node* head = b;
    Node* tail = b;

    insertAtTail(tail,5);
    insertAtTail(tail,7);
    insertAtTail(tail,9);
    Node* temp = tail;
    insertAtTail(tail,11);
    insertAtTail(tail,13);
    insertAtTail(tail,14);
    insertAtTail(tail,15);
    tail -> next = temp;
    
    //traverse(head);
    cout << detectAndDeleteLoop(head) << endl;
    traverse(head);
    //cout << detectLoop(head) << endl;
    
    return 0;
}
*/

//  Roatte list
/*
class Solution {
public:
    
        
    int getLength(ListNode* head) {
        int len = 0;
        
        ListNode* temp = head;
        
        while(temp != NULL) {
            len++;
            temp = temp -> next;
        }
        return len;
    } 
    
    ListNode* rotateRight(ListNode* head, int k) {
              
        int n = getLength(head);
        
        
        if(head == NULL || head -> next == NULL || k == 0 || k % n == 0)
            return head;
        
        //update k
        k = k % n;
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        int t = n-k;
        
        while(t--) {
            prev = curr;
            curr = curr->next;
        }
        
        //step2
        prev -> next = NULL;
        
            
        //step3: tail -> next = head
        ListNode* tail = curr;
        while(tail ->next != NULL) {
            tail = tail -> next;
        }
            
        tail -> next = head;
        
        //step4: return ans
        return curr;

  
    }
};

 */