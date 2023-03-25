// Array
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int basic[3]={1,2,3};
    array<int,4>a={1,2,3,4};
    int size=a.size();
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd Index-> "<<a.at(2)<<endl;
    cout<<"Empty or not-> "<<a.empty()<<endl;
    cout<<"First Element -> "<<a.front()<<endl;
    cout<<"Last Element -> "<<a.back()<<endl;
    
return 0;
}
*/

// Vector
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;

    // Vector size ke pata h

    vector<int> a(5,1);
    cout<<"Print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Capacity -> " <<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    cout<<"Element at 2nd Index -> "<<v.at(2)<<endl;

    cout<<"Front " <<v.front()<<endl;
    cout<<"Back " <<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size "<<v.size()<<endl;
    cout<<"Capacity -> "<<v.capacity()<<endl;
return 0;
}

*/

// Deque
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }

    cout<<"front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;
    cout<<"Empty or not "<<d.empty()<<endl;
    cout<<"Before Erase"<<d.size()<<endl;
        
        //  Erase ke liye Rang batani padti h
    d.erase(d.begin(),d.begin()+1);
    cout<<"After Erase"<<d.size()<<endl;
return 0;
}

*/

//  List
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l;
    list<int>n(5,100);
    cout<<"Printing n"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
    l.push_back(1);
    l.push_front(2);
    cout<<"Printing n "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
return 0;
}
 
 */

// Stack

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string>s;
    s.push("Love");
    s.push("Babbar");
    s.push("Kumar");

    cout<<"Top Element-> "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element-> "<<s.top()<<endl;
    cout<<"Size of Stack"<<s.size()<<endl;
    cout<<"Empty or not"<<s.empty()<<endl;
return 0;
}

*/

//  Queue
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string>q;
    q.push("Love");
    q.push("Babbar");
    q.push("Kumar");
    cout<<"Size before pop"<<q.size()<<endl;
    q.pop();
    cout<<"First element "<<q.front()<<endl;
    cout<<"Size after pop "<<q.size()<<endl;
return 0;
}

*/

// Priority Queue
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //mix heap
    priority_queue<int>maxi;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"Size -> "<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    // min heap
    priority_queue<int,vector<int>, greater<int> >mini;
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    int m=mini.size();
    for(int i=0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

return 0;
}

*/

//  Set
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(1);
    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }

return 0;
}

*/

// Map
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="Babbar";
    m[13]="Love";
    m[2]="Kumar";m.insert( {5,"bheem"});

    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Finding 13-> "<<m.count(13)<<endl;
    cout<<"After erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    auto it=m.find(5);
    for(auto i=it;i!=m.end(); i++) {
        cout<<(*i).first<<endl;
    }
return 0;
}

*/

// Algorithm

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(16);
    cout<<binary_search(v.begin(),v.end(),6)<<endl;
return 0;
}