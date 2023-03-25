// Selection Sort
/*
#include<iostream>
#include<vector>
using namespace std;
void Selection_Sort(vector<int>& arr,int n){
  for(int i=0; i<n; i++){
    int minIndex=i;
    for(int j=i+1; j<n; j++){
      if(arr[j]<arr[minIndex])
          minIndex=j;
    }
    swap(arr[minIndex],arr[i]);
  }
}
int main(){
  vector<int> vec={12,3,52,36,45,96,21};
  Selection_Sort(vec,vec.size());
  for(auto i:vec){
    cout<<i<<" ";
  }
  return 0;
}
*/

//  Bubble Sort
#include<iostream>
#include<vector>
using namespace std;
void Bubble_Sort(vector<int>& arr,int n){
  for(int i=1; i<n; i++){
    for(int j=0; j<n-i; j++){
      if(arr[j]>arr[j+1])
      swap(arr[j],arr[j+1]);
    }
  }
}
int main(){
  vector<int> vec={-2,45,0,11,-9};
  Bubble_Sort(vec,vec.size());
  for(auto i:vec){
    cout<<i<<" ";
  }
  return 0;
}
