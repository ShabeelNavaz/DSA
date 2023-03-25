/*
#include<iostream>
using namespace std;
int binarySearch(int arr[], int n,int target){
    int s=0;
    int e=n-1; 
    int mid=(s+e)/2;
    while(s<=e){
        int midElement=arr[mid];
    if(midElement==target){
        return mid;
    }
    if(target < midElement){
        e=mid-1;
     }
     else{
        s=mid+1;
     }
     mid=(s+e)/2;
    }
    return -1;
}
int main(){
    int arr[6]={12,13,14,15,16,17};
    cout<<binarySearch(arr,6,16);
    return 0;
}

*/

//  Binary Search using for STL
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={14,15,16,20,23,26};
    int n=6;
    cout<<binary_search(arr,arr+n,20 );
    return 0;
}
*/


// Find the First of Occurence
/*
#include<iostream>
using namespace std;
int FirstOcc(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        int midElement = arr[mid];
        if(midElement == target){
            ans = mid;
            e = mid-1;
        }
        if(target < midElement){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[8]={12,15,56,78,15,90,34};
    cout<<FirstOcc(arr,8,15);
    return 0; 
}
*/

// Fixed point (Value == Index)
/*
  #include<iostream>
  using namespace std;
  int FixedPoint(int arr[],int n){
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
        if(arr[mid]<mid){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
  }
  int main(){
    int arr[6]={-10,-5,0,2,4};
    cout<<FixedPoint(arr,5)<<endl;
    return 0;
  }
  */
/*
// Pivot element
#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
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
int main(){
    int arr[6]={3,8,10,17,1};
    cout<<"Pivot is "<<getPivot(arr,6)<<endl;
    return 0;
}
*/

/*
// Search in a rotated & sorted Array

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

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot=getPivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
}

int main(){
    vector<int> vec={7,9,1,2,3};
    int ans = findPosition(vec,5,1);
    cout<<ans<<endl;
    return 0;
}

 */
/*
//  Peak in mountain array
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
    }
};
*/

/*

//Chck if N & its double exits-> Using Vector
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& arr,int s,int e,int target){
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

bool checkifExist(vector<int>& arr){
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size(); i++){
        if(arr[i] >=0 && binarySearch(arr,i+1,arr.size()-1,2*arr[i]))
        return true;
        if(arr[i] <0 && arr[i]%2 == 0 && binarySearch(arr,i+1,arr.size()-1,arr[i]/2))
        return true;
    }
    return false;
}
*/

/*

///Chck if N & its double exits -> Using Array
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
//Infinite sorted array

#include<iostream>
using namespace std;
int binarySearch(int arr[], int s,int e,int target){
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
         }
        mid=s+(e-s)/2;
    }
    return -1;
}
int findPosition(int arr[], int target){
    int s=0;
    int e=1;
    int val=arr[s];
    while(val<target){
        s=e;
        e=2*e;
        val=arr[e];
    }
    return binarySearch(arr,s,e,target);
    }
*/
/*
#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid] == k){
            return mid;
        }
        if(k<arr[mid]){
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
    int arr[6]={2,3,4,5,6,7};
    int ans=binarysearch(arr,6,5);
    if(ans){
        cout<<"Element is Present"<<endl;
    }
    else{
        cout<<"Element is Absent"<<endl;
    }

return 0;
}
*/

/*
#include<iostream>
using namespace std;
int binarySearch(int arr[],int s,int e,int k){
    if(s>e){
        return -1; 
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return mid;
    }
    if(k<arr[mid]){
        binarySearch(arr,s,mid+1,k);
    }
    else{
        binarySearch(arr,mid-1,e,k);
    }

}
int main(){
    int arr[6]={2,3,4,5,6,7};
    int ans=binarySearch(arr,0,6,5);
    if(ans){
        cout<<"Element is Present"<<ans<<endl;
    }
    else{
        cout<<"Element is Absent"<<ans<<endl;
    }
return 0;
}

*/

/*
#include<iostream>
using namespace std;
int binarySerach(int arr[],int s,int e,int k){
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(k==arr[mid]){
        return mid;
    }
    if(k<arr[mid]){
        binarySerach(arr,mid+1,e,k)
    }
    else{
        binarySerach(arr,s,mid-1,k);
    }
}
int main(){
    int arr[6]={23,34,56,67,78,89};
    int ans=binarySerach(arr,0,6,67);
    if(ans){
        cout<<"Element is Present"<<ans<<endl;
    }
    else{
        cout<<"Element is Absent"<<ans<<endl;
    }
return 0;
}
*/

// book allocation 

#include<iostream>
using namespace std;
int allocationBook(int arr[],int n,int m){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int mina(){
    

}