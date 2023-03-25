/*
// Factorail
#include<iostream>
using namespace std;
int Factorial(int n){
    // base case
    if(n == 1){
        return 1;
    }
    return n*Factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    cout<<"Factorial of n is "<<Factorial(n)<<endl;
    return 0;
}
*/
/*
//  Counting
#include<iostream>
using namespace std;
void print(int n){
        if(n<1){
            return  ;
        }
        print(n-1);
        cout<<n<<" ";
    }
int main(){
    print(5);
    cout<<endl;
    return 0;
}
*/
/*
//  Expontentaion
#include<iostream>
using namespace std;
int expontation(int n){
    if(n == 0)
        return 1;
    
    int Sp=expontation(n/2);
    if(n&1){
        return Sp*Sp*2;
    }
    else
      return Sp*Sp;
}
int main(){
    cout<<"Ans is "<<expontation(12)<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans=fib(n-1)+fib(n-2);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int step(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ans=step(n-1)+step(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<step(n)<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaining=isSorted(arr+1,size-1);
        return remaining;
    }
}
int main(){
    int arr[5]={2,4,6,8,9};
    bool ans=isSorted(arr,5);
    if(ans){
        cout<<"Array is Sorted "<<endl;
    }
    else{
        cout<<"Array is not Sorted "<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int getSum(int arr[],int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }else{
    int remaining=getSum(arr+1,n-1);
       int sum =arr[0]+remaining;
    }
}
int main(){
    int arr[5]={3,2,5,1,6};
    int ans=getSum(arr,5);
    cout<<ans<<endl;
    }
*/
/*
#include<iostream>
using namespace std;
bool Search(int arr[],int n,int k){
    if(n == 0){
        return false;
    }
    if(arr[0] == k){
        return true;
    }
    else{
        bool remaining = Search(arr+1,n-1,k);
        return remaining;
    }
}
int main(){
    int arr[5]={3,5,1,2,6};
    bool ans=Search(arr,5,8);
    if(ans){
        cout<<"Key is Present "<<endl;
    }
    else{
        cout<<"Key is Absent "<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
bool BinarySearch(int arr[],int s,int e,int k){
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return BinarySearch(arr,mid+1,e,k);
    }
    else{
        return BinarySearch(arr,s,mid-1,k);
    }
}
int main(){
    int arr[5]={2,4,6,8,90};
    int ans=BinarySearch(arr,0,5,94);
    if(ans){
        cout<<"Ans is Present "<<endl;
    }
    else{
        cout<<"Ans is Absent "<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int binarySearch(int arr[], int s,int e,int k){
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid] == k){
        return mid;
    }
    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}
int main(){
    int arr[5]={23,45,67,89,90};
    int ans=binarySearch(arr,0,5,809);
 //   cout<<"Ans is "<<ans<<endl;
    if(ans){
        cout<<"Ans is Found "<<ans<<endl;
    }
    else{
        cout<<"Ans is Not Found "<<ans<<endl;
    }
    
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void reverse(string &arr,int i,int j){
    if(i>j){
        return ;
    }
    swap(arr[i],arr[j]);
    i++;
    j--;
    reverse(arr,i,j);
}
int main(){
    string name="babbar";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void reverse(string &str,int i,int j){
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
}
int main(){
    string name="Shabeel";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
bool cheackPalindrome(string str,int i,int j){
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        return cheackPalindrome(str,i+1,j-1);
    }
}
int main(){
    string name="Shabeel";
    bool isPalindrome=cheackPalindrome(name,0,name.length()-1);
    if(isPalindrome){
        cout<<"its Palindrome"<<endl;
    }
    else{
        cout<<"Its not Palindrome"<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void Bubbal(int *arr,int n){
    if(n == 0 || n == 1){
        return ;
    }
    for(int i=0; i<n; i++){
        if(arr[0]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    Bubbal(arr,n-1);
}
int main(){
    int arr[5]={2,5,1,6,9};
    Bubbal(arr,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void bubbal(int *arr,int n){
    if(n == 0 || n == 1){
        return ;
    }
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbal(arr,n-1);
}
int main(){
    int arr[6]={23,45,67,12,43,56};
    bubbal(arr,6);
    for(int i=0; i<6; i+
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

//Coins
/*
#include<iostream>
using namespace std;
int solve(int coins[],int n,int amount,int currentCoin){
     // base case
     if(amount == 0){
        return 1;
     }
     if(amount < 0 ){
        return 0;
     }
     int ways=0;
     for(int i=currentCoin; i<n; i++){
        ways+=solve(coins,n,amount-coins[i],i);
     }
     return ways;
}
int main(){
    int coins[]={2,3};
    int amount=5;
    int size=2;
    int ans = solve(coins,size,amount,0);
    cout<<ans<<endl;
    return 0;
}
*/
/*
//   Optimal Strategy
#include<iostream>
using namespace std;
int OptimalStrategy(int arr[],int i,int j){
    // base case
    if(i>j){
        return 0;
    }
    int choice1=arr[i]+min(OptimalStrategy(arr,i+2,j),OptimalStrategy(arr,i+1,j-1));
    int choice2=arr[j]+min(OptimalStrategy(arr,i+1,j-1),OptimalStrategy(arr,i,j-2));
    int ans=max(choice1,choice2);
    return ans;
}
int main(){
    int arr[]={20,30,2,2,2,10};
    int i=0;
    int j=5;
    cout<<"Ans is "<<OptimalStrategy(arr,i,j)<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){

}
void mergeSort(int arr[],int s,int e){
    // base case
    if(s>=e){
        return ;
    }
    int mid=s+(e-s)/2;
    // left part
    mergeSort(arr,s,mid);
    // right part
    mergeSort(arr,mid+1,e);
    // merge 2 sorted parts
    merge(arr,s,e);
}
int main(){
    int arr[6]={12,34,45,32,21,89};
    
    return 0;
}
*/
//  Recursion Sheet
/*

//  Reverse

class Solution {
public:
    void reverseString(vector<char>& s) {
     
        for(int i=0; i<s.size()/2; i++){
            swap(s[i],s[s.size()-i-1]);
        }
    }
};

*/

//  Power of four
/*
class Solution {
public:
    bool isPowerOfFour(int n) {
     if(n<1){
         return false;
     }   
        double ans =log(n)/log(4);
        return ans == (int) ans;
    }
};
*/
/*

//  Find the Winner of the Circular Game

class Solution {
public:
          int solve(int n, int k){
        if(n == 0){
            return 0;
        }
        
        int ans = (solve(n-1,k)+k)%n;
              return ans;
    }

    int findTheWinner(int n, int k) {
        int ans = solve(n , k);
        return ans+1;   
    }
};
*/

class Solution {
public:
    vector<int> diffWaysToCompute(string str) {
        
        vector<int> output;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i] =='+' || str[i] =='-' || str[i] =='*')
            {
                vector<int> left = diffWaysToCompute(str.substr(0,i));
                vector<int> right = diffWaysToCompute(str.substr(i+1));
                for(auto x : left)
                {
                for(auto y : right)
                {
                    if(str[i] == '+') output.push_back(x + y);
                    if(str[i] == '-') output.push_back(x - y);
                    if(str[i] == '*') output.push_back(x * y);
                }
            }
        }
    }
    if(!output.size()) output.push_back(stoi(str));
    return output;
    }
};