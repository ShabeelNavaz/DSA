// Reverse
/*
#include<iostream>
using namespace std;
void Reverse(int arr[],int n){
    int i=0;
    int j=n-1;
    while (i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

}
int main(){
    int arr[6]={2,3,4,5,6,7,};
    Reverse(arr,6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void Swap(int arr[],int n){
    int i=0;
    while(i<n){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
            i=i+2;
        }
    }
}
int main(){
    int arr[6]={2,3,4,5,6,7};
    Swap(arr,6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAtTail(Node* &tail,int d){
    Node* newNode=new Node(d);
    tail->next=newNode;
    tail=newNode;
}

void traverse(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
Node* b = new Node(3);
Node* head=b;
Node* tail=b;
insertAtTail(tail,5);
insertAtTail(tail,6);
traverse(head);
return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAtHead(Node* &head,int d){
    Node* newNode=new Node(d);
    newNode->next =head;
    head=newNode;
}
void insertAtTail(Node* &tail,int d){
    Node* newNode=new Node(d);
    tail->next=newNode;
    tail=newNode;
}
void insertAtPosition(Node* &head,int pos,int d){
    if(pos == 1){
        insertAtHead(head,d);
    }
    else{
        Node*newNode = new Node(d);
        Node* prev = head;
        int t = pos-1;
        while(t--){
            prev = perv->next;
        }
        newNode->next=prev->next;
        prev->next=newNode;
    }
}
void traverse(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* b=new Node(3);
    Node* head=b;
    Node* tail=b;
    insertAtTail(tail,5);
    insertAtTail(tail,8);
    traverse(head);
    insertAtHead(head,17);
    traverse(head);
    insertAtTail(tail,89);
    traverse(head);
    return 0;

}
*/
/*
  void insertAtPosition(Node* &head,int pos,int d){
    // Base Case
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
*/
/*

#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int midElement=arr[mid];
        if(midElement == target){
            return mid;
        }
        if(midElement >= target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[6]={2,3,4,5,6,7};
    cout<<binarySearch(arr,6,5);
    return 0;

}
*/

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={2,3,4,5,6,7};
    int n=6;
    cout<<binary_search(arr,arr+n,5);

return 0;
}
*/

/*
#include<iostream>
using namespace std;
int firstOcc(int arr[],int n, int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        int midElement=arr[mid];
        if(midElement == target){
            ans =mid;
            e=mid-1;
        }
        if(target < midElement){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
int arr[8]={2,4,4,5,4,7,6};
cout<<firstOcc(arr,8,4);
return 0;
}
*/

/*
#include<iostream>
using namespace std;
int fixedPoint(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==mid){
            return mid;
        }
        if(arr[mid]>mid){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[6]={-10,-29,2,3,4,5};
    cout<<fixedPoint(arr,6);
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int pivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[6]={7,9,1,2,3};
    cout<<pivot(arr,6);
    return 0;

}

*/

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getPivot(vector<int>& arr,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int binarySearch(vector<int>& arr,int s,int e,int k){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==k){
            return mid;
        }
        if(k>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int findPosition(vector<int>& arr,int n,int k){
    int pivot=getPivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
}
int main(){
    vector<int> vec={4,5,6,7,0,1,2};
    int ans=findPosition(vec,7,7);
    cout<<ans<<endl;
    return 0;

}

*/

/*

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int s,int e,int target){
    int mid=s+(e-s)/2;
    while(s<=e){
        if(target == arr[mid]){
            return true;
        }
        if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return false;
}

bool checkifExist(int arr[],int n){
    //int n;
        cout<<2<<endl;
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        if(arr[i] >=0 && binarySearch(arr,i+1,n,2*arr[i]))
        return true;
        if(arr[i] <0 && arr[i]%2 == 0 && binarySearch(arr,i+1,n,arr[i]/2))
        return true;
    }
    return false;
}



int main(){
    int arr[10]={10,3,5,2,7};
    cout<<1<<endl;
    int ans=checkifExist(arr,10);
    cout<<"Ans is "<<ans<<endl;
    return 0;
}
*/

/*
    #include<iostream>
    #include<vector>
    using namespace std;
    bool isPossible(int arr[], int n, int m, int mid){
        int studentCount=1;
        int pageSum=0;
        for(int i=0; i<n; i++){
            if(pageSum+arr[i]<=mid){
                pageSum +=arr[i];
            }
            else{
                studentCount++;
                if(studentCount>m ||arr[i]>mid){
                    return false;
                }
                pageSum=arr[i];

            }
            if(studentCount > m){
                return true;
            }
        }
    }
    int allocationBook(int arr[],int n,int m){
        int s=0;
        int sum;
        for(int i=0; i<n; i++){
            sum+=arr[i];
        }
        int e=sum;
        int ans=-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(isPossible(arr,n,m,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;

        }
        return ans;
    }
    int main(){
        int arr[4]={10,20,30,40};

        cout<<allocationBook(arr,4,2)<<endl;
        return 0;
    }
    */
/*
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node* buildtree(){
    cout<<"Enter the value for data "<<endl;
    int data;
    cin>>data;

    if(data == -1)
        return NULL;
    
    Node* newNode = new Node(data);
    cout<<"Enter the value for left child "<<data<<endl;
    newNode->left = buildtree();

    cout<<"Enter the value for right child "<<data<<endl;
    newNode->right = buildtree();

    return newNode;   
}

void preOrder(Node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";

    preOrder(root->left);

    preOrder(root->right);
}
int main(){
    
    Node* root = NULL;

    root = buildTree();
    cout << "Printing PreOrder " << endl;
    preOrder(root);
    cout << endl;
    return 0;
}
*/
/*
#include<iostream>
#include<queue>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};


Node* buildTree() {
    cout << "Enter the value of data " << endl;
    int data;
    cin >> data;

    if(data == -1) 
        return NULL;

    Node* newNode = new Node(data);

    cout << "Enter the data for left child of " << data << endl;
    newNode -> left = buildTree();

    cout << "Enter the data for right child of " << data << endl;
    newNode -> right = buildTree();

    return newNode;

}

void preOrder(Node* root) {
    //base case
    if(root == NULL)
        return;

    //N
    cout << root->data << " ";
    //L
    preOrder(root->left);
    //R
    preOrder(root->right);
}
int main() {

    Node* root = NULL;

    root = buildTree();
    cout << "Printing PreOrder " << endl;
    preOrder(root);
    cout << endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(){
    cout<<"Enter the value for data "<<endl;
    int data;
    cin>>data;

    if(root == NULL){
        return ;
    }
    Node* newNode = new Node(d); 
    cout<<"Enter the value for the left child "<<endl;
    newNode->left = buildTree();
    cout<<"Enter the value for the right child "<<endl;
    newNode->right = buildTree();

}

void preorder(Node* root){

    if(root == NULL){
        return ;
    }
    cout<<root->data <<" ";

    preorder(root->left);

    preorder(root->right);

}
int main(){
    Node* root = NULL;

    root = buildTree();

    cout<<"Printing Preorder "<<endl;
    preorder(root);
    cout<<endl;
    return 0;
}*/
/*

#include<iostream>
using namespace std;
int bianrySearch(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int midElement=arr[mid];
        if(arr[midElement]==k){
            return midElement;
        }
        if(k>arr[midElement]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return -1;
}
int main(){
    int arr[5]={2,3,4,5,6};
    cout<<bianrySearch(arr,5,5);
    return 0;

}
*/


#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int midElement=mid;
        if(arr[midElement]==k){
            return midElement;
        }        
        if(k>arr[midElement]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[6]={23,45,56,67,78};
    cout<<binarySearch(arr,6,45);
    return 0;

}