/*
#include<iostream>
using namespace std;
void printNumber(){
    cout<<"Printing no "<<0<<endl;
}
int main(){
    int n=5;
    printNumber();
    return 0;

}
*/
/*
#include<iostream>
using namespace std;
void printno(int n){
    cout<<"Printing the no "<<n<<endl;
}
int main(){
    int n=5;
    printno(n);
    return 0;
}
*/

// Pass by value
/*
#include<iostream>
using namespace std;
void passbyvalue(int n){
    n=10;
    cout<<"Printing the no : "<<n<<endl;
}
int main(){
    int n=5;
    passbyvalue(n);
    cout<<"Main fun value "<<n<<endl;
    return 0;

}
*/
/*
#include<iostream>
using namespace std;
void Ammi(int z){
    cout<<"Ammi ji "<<z<<endl;
    z++;
}
void Zaid(int m){
    cout<<"Zaid integar "<<m<<endl;
    m++;
    Ammi(m);

}
void Aaliya(int n){
    cout<<"Aaliya integar "<<n<<endl;
    n++;
    Zaid(n);
}
int main(){
    int n=5;
    Aaliya(n);
    cout<<"Main no: "<<n<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void ramesh(int m){
    cout<<"Ramesh int "<<m<<endl;
}
void ram(int n){
    cout<<"Ram int "<<n<<endl;
    n++;
    ramesh(n);
}
int main(){
    int n=8;
    ram(n);
    cout<<"Main no: "<<n<<endl;
}
*/

// Print Even no
/*
#include<iostream>
using namespace std;
int even(int n){
    for(int i =2; i<=n; i=i+2){
        cout<<i<<" ";
    }
}   
int main(){
    int n=15;
    even(n);
    return 0;
}
*/
// squares
/*
#include<iostream>
using namespace std;
void squares(int n){
    for(int i=1; i<=n; i++){
        cout<<i*i<<" ";
    }
}
int main(){
    int n=5;
    squares(n);
    return 0; 
}
*/
// Factorial
/*
#include<iostream>
using namespace std;
int getFactorial(int n){
    int ans=1;
    for(int i=n; i>=1; i--){
        ans=ans*i;
    }
    return ans;
}
int main(){
    int n=5;
    int fact=getFactorial(10);
    cout<<fact;
    return 0;
}
*/
//Name
/*
#include<iostream>
using namespace std;
void name(int n){
    for(int i=0; i<=n; i++){
        cout<<"Shaneel"<<endl;
    }
}
int main(){
    int n=10;
    name(10);
    return 0;
}
*/
//create array
/*
#include<iostream>
using namespace std; 
void Array(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    Array(arr,5);
    return 0;
}
*/
// Pass by address
/*
#include<iostream>
using namespace std;
void Array(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void UITL(int arr[], int s){
    arr[0]=23;
    cout<<"Printin in UITL function"<<endl;
    Array(arr,3);
}
int main(){
    int arr[5]={1,2,3,4,5};
    UITL(arr,3);
    cout<<"Printing in main fun"<<endl;
    Array(arr,3);
    return 0;
}
*/

// Printing the Array
/*
#include<iostream>
using namespace std;
void Array(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[20];
    cout<<"Enter the no of ele3ment"<<endl;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Array(arr,n);
    return 0;
}
*/

// linear search
/*
#include<iostream>
using namespace std;
bool search(int arr[],int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target)
        return true;
    }
        return false;
}
int main(){
    int arr[20];
    cout<<"Enter the element"<<endl;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(search(arr,n,7)){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
bool printArray(int arr[],int n, int k){
    for(int i=0; i<n; i++){
        if(arr[i]==k)
        return true;
    }
    return false;
}
int main(){
    int arr[10]={12,13,14,15,16,17,18,19,20};
    int n; 
    cin>>n;
    if(printArray(arr,10,n)){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;
    }
    return 0;
}
*/

// Reverse a Array
/*
#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
            i++;
            j--;
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    reverse(arr,6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/

// Find the Miximum no
/*
#include<iostream>
using namespace std;
int getMaxFromArray(int arr[], int n){
    int ans =INT8_MIN;
    for(int i=0; i<n; i++){
        ans=max(ans,arr[i]);
    }
    return ans;
}
int main(){
    int arr[10]={10,12,1,3,59,2,7,10};
    int find=getMaxFromArray(arr,10);
    cout<<"maximum value is "<<find<<endl;
    return 0;
}
*/

// Find the minimum value
/*
#include<iostream>
using namespace std;
int getmin(int arr[], int n){
    int ans= INT8_MAX;
    for(int i=0; i<n; i++){
        ans =min(ans,arr[i]);
    }
    return ans;
}
int main(){
    int arr[5]={4,2,9,3,5};
    int find=getmin(arr,5);
    cout<<"Minimum vale is "<<find<<endl;
    return 0;
}
*/

// Swap Altranative
/*
#include<iostream>
using namespace std;
void swapAltranative(int arr[],int n){
    int i=0;
    while(i<n){
        if(i+1 <n){
            swap(arr[i],arr[i+1]);

        }
        i=i+2;
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    swapAltranative(arr,6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

//   Palindrome No 
/*
#include<iostream>
using namespace std;
bool chakePalindrome(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else
            return false;
    }
    return true;
}
int main(){
    int arr[6]={1,2,3,3,2,1};
    if(chakePalindrome(arr,6)){
        cout<<"Palindrome no"<<endl;
    }
    else{
        cout<<"Not Palindrome no"<<endl;
    }
    return 0;
}
*/
// --------------------------------------------Dought
/*
#include<iostream>
using namespace std;
int Union(int arr1[],int arr2[],int m,int n){
    int i=0;
    int j=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i++]<<" ";
        }
        else if(arr1[j]<arr2[i])
            cout<<arr2[j++]<<" ";
            else if(arr1[i]-1>=0){
                cout<<arr1[i--];
            }
            else{
                cout<<arr2[j++]<<" ";
                i++;
            }
    }
    
    while(i<m){
        cout<<arr1[i++]<<" ";
    }
    while(j<n){
        cout<<arr2[j++]<<" ";
    }
    

}
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={2,5,6,42,53};
    int arr3[0];
    int sort=Union(arr1,arr2,5,5);

    return 0;
}
*/

// Negative no to one side
/*
#include<iostream>
using namespace std;
void remove(int arr[],int n){
    int i=0;
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    
}
int main(){
    int arr[7]={3,-1,2,-4,-6,-4,5};
    remove(arr,7);
    for(int i=0; i<7; i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}
*/

//kadan's Algorithm
/*
#include<iostream>
using namespace std;
int getMaxSum(int arr[],int n){
    int ans=INT8_MIN;
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
        ans=max(ans,sum);
        if(sum<0)
        sum=0;
    }
    return ans;
}
int main(){
     int arr[8]={-2,-3,4,-1,-2,1,5,-3};
    int no=getMaxSum(arr,8);
    cout<<no<<endl;
    return 0;
}
*/
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int twoPair(int arr[],int n,int target){
     sort(arr,arr+n);
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i],arr[j]==target){
            return arr[i],arr[j];
        }
         if(arr[i]+arr[j]>target){
            j--;
        }
        else{
            arr[i],arr[j]<target;
            i++;
        }
    }
}
int main(){
    int arr[7]={3,1,4,5,9,13,11};
    sort(arr,arr+1);
    int no=twoPair(arr,7,14);
    cout<<no<<endl;
    return 0;

} 
*/

//MIn Swap
/*
#include<iostream>
using namespace std;
int minSwaps(int arr[],int size,int k){
    //Find the window size -> count opf numbers <=k
    int cnt=0;
    for(int i=0; i<size; i++){
        if(arr[i]<=k)
        cnt++;
    }

    //Create first window
    int bad =0;
    for(int i=0; i<cnt; i++){
        if(arr[i]>k)
        bad++;
    }

    int ans = bad;
    int n;
    //Check for remaining window
    for(int i=0; i<n; i++){
        for(int j=cnt; j<=n; j++){
            if(arr[i]>k)
            bad++;
        }
            ans = min(ans,bad);

    }
    return 0;

}
int main(){
int arr[20]={2,1,5,6,3};
minSwaps(arr,20,3);
return 0;
} 
*/
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int FristRepeating(int arr[],int n){
    unordered_map<int,int> count;
    for(int i=0; i<n; i++){
        int currentElement=arr[i];
        count[currentElement]++;
    }
    for(int i=0; i<n; i++){
        int currentElement=arr[i];
        if(count[currentElement]>1){
            return currentElement;
        }
    }
    return -1;
} 
int main(){
    int arr[10]={2,6,5,2,3,9,4};
    int n=FristRepeating(arr,10);
    cout<<n<<endl;

    return 0;
}
*/

