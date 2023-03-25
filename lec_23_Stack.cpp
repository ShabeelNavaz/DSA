// STL
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //Creation of Stack
    stack<int>st;
    //Insertion
    st.push(4);
    st.push(5);
    st.push(6);
    //Check Size
    cout<<st.size()<<endl;
    //Check Empty
    cout<<st.empty()<<endl;
    //Check Top
    cout<<st.top()<<endl;
    //Check Remove 
    st.pop(); 
    cout<<st.top()<<endl;

return 0;
}
*/
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack{ 

    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        arr=new int[size];
        top=-1;
        this->size=size;
    }
    void push(int data){
        top++;
        arr[top]=data;
    }
    void pop(){
        top--;
    }
    int getSize(){
        return this->size;
    }
    bool isEmpty(){
        if(top == -1)
          return true;
        else
           return false;
    }

    int getTop(){
        return arr[top];
    }
};
int main(){
    Stack* st = new Stack(5);
    st->push(2);
    st->push(5);
    cout<<st->getSize()<<endl; 
return 0;
}
*/
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    stack<int>s;
    while(n--){
        int data;
        cin>>data;
        s.push(data);
    }
    while(!s.empty()){
        cout<<s.top()<< " ";
        s.pop();
    }
    cout<<endl;
return 0;
}
*/
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printMiddle(stack<int>& st, int totalSize){
    if( (totalSize/2)+1 == st.size()){
        cout<<"Middle is " <<st.top();
        return;
    }
    // Step 1
    int topElement = st.top();
    st.pop();
    // Step 2
    printMiddle(st,totalSize);
    // Step 3
    st.push(topElement);
}
int main(){
    stack<int> st;
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(12);
    printMiddle(st,st.size());

return 0;
}
*/
/*
 Reverse
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st,int item){
    // Base Case
    if(st.empty()){
        st.push(item);
        return;
    }
    // Step 1
    int topElement=st.top();
    st.pop();
    //Step 2
    insertAtBottom(st,item);
    //Step 3
    st.push(topElement);
}
void reverse(stack<int> &st){
    // Base Case
    if(st.empty())
    return;
    //Step 1
    int topElement = st.top();
    st.pop();
    // Step 2
    reverse(st);
    //Step 3
    insertAtBottom(st,topElement);
}
int main(){
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    st.push(10);
    insertAtBottom(st,12);
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
return 0;
}
*/
/*
// Sort Stack

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sortInsert(stack<int> &s,int data){
    // base Case
    if(s.empty() || s.top()<data){
        s.push(data);
        return;
    }
    int topElement=s.top();
    s.pop();
    // Recursion
    sortInsert(s,data);
    s.push(topElement);
}
void sortStack(stack<int>& s){
    // base case
    if(s.empty()){
        return;
    }
    int topElement=s.top();
    s.pop();
    // Recursion
    sortStack(s);
    //sortinsert
    sortInsert(s,topElement);
}
int main(){
    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(1);
    s.push(3);
    
    sortStack(s);
    cout<<"printing answer"<<endl;
     while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
     }
     cout<<endl;
return 0;
}
*/

/*
class Solution {
public:
    bool match(char close, char open) {
        
        if(close == ')' && open == '(')
            return true;
        
        if(close == ']' && open == '[')
            return true;
        
        if(close == '}' && open == '{')
            return true;
        
        return false;
    }
    bool isValid(string s) {
        stack<char> st;
        
        int len = s.length();
        
        if(len&1)
            return false;
        
        for(int i=0; i<s.length(); i++) {
            
            char ch = s[i];
            
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else
            {
                //closing brakcets
                if(!st.empty() && match(ch, st.top())) {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            
        }
        
        if(st.empty())
            return true;
        else
            return false;
        
    }
};
*/

/*
// Check Redundant

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkRedundant(string s) {

    stack<char> st;

    for(int i=0; i<s.length();i++) {

        char ch = s[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else if(ch == ')') {
            bool isRedundant = true;

            while(st.top() != '(') {
                char top = st.top();

                if(top == '+' || top == '-' || top == '*' || top == '/')
                    isRedundant = false;

                st.pop();
            }

            if(isRedundant == true)
                return true;
            st.pop();
        }
    }
    return false;
}
int main(){
    string s="((a+b))";
    cout<<"Redundant or not "<<checkRedundant(s)<<endl;
return 0;
}
*/
