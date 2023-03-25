#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;

    //push element
    q.push(3);    
    q.push(5);
    q.push(8);
    q.push(9);

    // remove element
    q.pop();

    //front element
    cout<<"Printing front element "<<q.front()<<endl;

    //size of queue
    cout<<"Size of Queue is "<<q.size()<<endl;

    //check q is empty or not
    cout<<"Empty or not "<<q.empty()<<endl;

    cout<<"Printing Queue: "<<endl;
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    
return 0;
}