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

void inOrder(Node* root) {
    //LNR
    //base case
    if(root == NULL)
        return;

    //L
    inOrder(root->left);
    //N
    cout << root->data << " ";
    //R
    inOrder(root->right);
}

void postOrder(Node* root) {
    //LNR
    //base case
    if(root == NULL)
        return;

    //L
    postOrder(root->left);
    //R
    postOrder(root->right);
    //N
    cout << root->data << " ";

}

void lvlOrderTraversal(Node* root) {

    queue<Node*> q;
    q.push(root);
    //change no. 1
    q.push(NULL);

    while(!q.empty()) {
        //tu nikal
        Node* front = q.front();
        q.pop();
        if(front == NULL) {
            cout << endl;
            //catch here
            if(!q.empty())//still elements are present
                q.push(NULL);
        }
        else{
            cout << front->data << " ";

            //bache chor jaio
            if(front->left != NULL)
                q.push(front->left);
            if(front->right != NULL)
                q.push(front->right);
        }
    }
}

int height(Node* root){
    if(root == NULL)
        return 0;
        int leftAns = height(root->left);
        int rightAns = height(root->right);
        return 1+max(leftAns, rightAns);
}

int main() {

    Node* root = NULL;

    root = buildTree();
    cout << "Printing PreOrder " << endl;
    preOrder(root);
    cout << endl;
    
    cout << "Printing Inorder " << endl;
    inOrder(root);
    cout << endl;

    cout << "Printing PostOrder " << endl;
    postOrder(root);
    cout << endl;

    cout << "Printing Level Order " << endl;
    lvlOrderTraversal(root);
    cout << endl;

    cout<<"Height os Tree is: "<<height(root)<<endl;
    return 0;
}

*/


//Daimeter

/*
class Solution {
public:
    int height(TreeNode root) {
        if(root == NULL)
            return 0;

        return max( height(root->left), height(root->right) ) + 1;
    }

    int diameter(TreeNode* root) {
        if(root == NULL)
            return 0;

        int option1 = diameter(root->left);
        int option2 = diameter(root->right);
        int option3 = 1 + height(root->left) + height(root->right);
        return max(option1, max(option2, option3));
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;

        return diameter(root) - 1;

    }
};

*/

//  Balanced tree or not
/*
class Solution {
public:
    pair<int, bool> solve(TreeNode* root) {
        if(root == NULL)
            return make_pair(0,true);
        
        pair<int,bool> leftAns = solve(root->left);
        pair<int,bool> rightAns = solve(root->right);
        
        int leftHeight = leftAns.first;
        int rightHeight = rightAns.first;
        
        bool diff = abs(leftHeight - rightHeight) <= 1;
        
        bool leftbalanced = leftAns.second;
        bool rightbalanced  = rightAns.second;
        
        if(leftbalanced && rightbalanced && diff) {
            return make_pair(max(leftHeight, rightHeight)+1, true);
        }
        else
        {
             return make_pair(max(leftHeight, rightHeight)+1, false);
        }
    }
    bool isBalanced(TreeNode* root) {
        pair<int,bool> ans = solve(root);
        return ans.second;
    }
};
*/

//  Symmetrix Tree

/*

class Solution{
    public:
        bool solve(TreeNode* a,TreeNode* b){
            if(a == NULL && b == NULL)
                return true;
            if(a != NULL && b == NULL)
                return false;
            if(a == NULL && b != NULL)
                return false;
            if(a->val != b->val)
                return false;
            
            return solve(a->left, b->right) && solve(a->right, b->left);
        }
        bool isSymmetric(TreeNode* root){
            if(root == NULL)
            return true;
            return solve(root->left, root->right);
        }
};

*/

/*
// Path Sum

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL)
            return false;
        
        if(root->val == targetSum && root->left == NULL && root->right == NULL)
            return true;
        
        bool leftAns = hasPathSum(root->left, targetSum - root->val);
        bool rightAns = hasPathSum(root->right, targetSum - root->val);
        
        return leftAns || rightAns;
    }
};

*/

// Lowest Common Ancestor

/*
class Solution{
    public:
    TreeNode* lowestCommonAncestor(TreeNode* root,TreeNode* p,TreeNode* q){
        if(root == NULL)
          return NULL;

        if(root == p || root == q)
            return root;

        else{
            TreeNode* leftAns = lowestCommonAncestor(root->left,p,q);
            TreeNode* rightAns = lowestCommonAncestor(root->right,p,q);

            if(leftAns != NULL && rightAns != NULL)
                return root;
            else if(leftAns == NULL)
                return rightAns;
            else
                return leftAns;
        }
    }
};
*/


// Constract Tree form Inorder & Preorder

//Constract Tree form Inorder & Postorder



#include<iostream>
#include<queue>
#include<vector>
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

void inOrder(Node* root) {
    //LNR
    //base case
    if(root == NULL)
        return;

    //L
    inOrder(root->left);
    //N
    cout << root->data << " ";
    //R
    inOrder(root->right);
}

void postOrder(Node* root) {
    //LNR
    //base case
    if(root == NULL)
        return;

    //L
    postOrder(root->left);
    //R
    postOrder(root->right);
    //N
    cout << root->data << " ";

}

void lvlOrderTraversal(Node* root) {

    queue<Node*> q;
    q.push(root);
    //change no. 1
    q.push(NULL);

    while(!q.empty()) {
        //tu nikal
        Node* front = q.front();
        q.pop();
        if(front == NULL) {
            cout << endl;
            //catch here
            if(!q.empty())//still elements are present
                q.push(NULL);
        }
        else{
            cout << front->data << " ";

            //bache chor jaio
            if(front->left != NULL)
                q.push(front->left);
            if(front->right != NULL)
                q.push(front->right);
        }
    }
}

int height(Node* root){
    if(root == NULL)
        return 0;
        int leftAns = height(root->left);
        int rightAns = height(root->right);
        return 1+max(leftAns, rightAns);
}

int position(vector<int> in, int key, int s,   int e){
    for(int i=s; i<=e; i++){
        if(in[i] == key)
            return i;
    }
    return -1;
}
 
Node* buildFromInorderPreorder(vector<int> in, vector<int> preorder, int &preOrderIndex, int inStart, int inEnd){

    // Base Case

    if(preOrderIndex == preorder.size() || inStart > inEnd){
        return NULL;
    }

    int element = preorder[preOrderIndex++];
    Node* root = new Node(element);

    //search element in inorder array

    int pos = position(in, element, inStart, inEnd);
    root->left = buildFromInorderPreorder(in, preorder, preOrderIndex, inStart, pos-1);
    root->right = buildFromInorderPreorder(in, preorder, preOrderIndex, pos+1, inEnd);
    return root;
}


 
Node* buildFromInorderPostorder(vector<int> in, vector<int> postorder, int &postOrderIndex, int inStart, int inEnd){

    // Base Case

    if(postOrderIndex < 0 || inStart > inEnd){
        return NULL;
    }

    int element = postorder[postOrderIndex--];
    Node* root = new Node(element);

    //search element in inorder array

    int pos = position(in, element, inStart, inEnd);
    root->right = buildFromInorderPostorder(in, postorder, postOrderIndex, pos+1, inEnd);
    root->left = buildFromInorderPostorder(in, postorder, postOrderIndex, inStart, pos-1);
    return root;
}

// InOrder Predecessor

    Node* getPredessor(Node* curr){

        int root;
        if(root == NULL)
            return NULL;
        Node* temp = curr->left;
        if(temp == NULL)
            return NULL;
        while(temp->right != NULL){
            temp = temp->right;
        }
        return temp;
    }

    void MorrisTraversal(Node* root){
        Node* curr = root;
        while(curr != NULL){
            if(curr->left == NULL){
                cout<<curr->data;
                curr = curr->right;
            }
        }
        else{
            Node* ptr = curr->left;

            whiel(pred->right != NULL && pred->right){
                pred = pred->right;
            }
        }

        // link Creation

        if(pred->right == NULL){
            pred->right = curr;
            curr == curr->left;
        }

        // link remove

        else{
            pred->right = NULL;
            cout<<curr->data;
            curr = curr->right;
        }
    }
// Faltter a binary tree
void flatter(Node* root){
    Node* curr = root;
    while(curr != NULL){
        if(curr->left != NULL){
            // find pred
            Node* pred = curr->left;
            while(pred->right != NULL){
                pred = pred->right;
            }
            pred->roght = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
            curr = currr->right
    }
}
int main() {

    
    // vector<int> inorder = {3,1,4,0,5,2};
    // vector<int> preOrder = {0,1,3,4,2,5};

    vector<int> inOrder;
    inOrder.push_back(4);
    inOrder.push_back(8);
    inOrder.push_back(2);
    inOrder.push_back(5);
    inOrder.push_back(1);
    inOrder.push_back(6);
    inOrder.push_back(3);
    inOrder.push_back(7);

    vector<int> postOrder;
    postOrder.push_back(8);
    postOrder.push_back(4);
    postOrder.push_back(5);
    postOrder.push_back(2);
    postOrder.push_back(6);
    postOrder.push_back(7);
    postOrder.push_back(3);
    postOrder.push_back(1);

    int index = postOrder.size()-1;
    Node* root = buildFromInorderPostorder(inOrder,postOrder,index,0,7);

    getPredessor(curr);
    lvlOrderTraversal(root);

    MorrisTraversal(root);

    return 0;

}

