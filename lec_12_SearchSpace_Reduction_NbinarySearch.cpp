/*
// EKO SPOJ
#include<iostream>
#include<algorithm>
using namespace std;

bool isPossibleSol(int mid,int arr[], int n, int target){
    int sum=0;
    for(int i=0; i<n; i++){
        int dif=0;
        if(arr[i]>mid)
        dif =arr[i]-mid;
        sum=sum+dif;
    }
    if(sum>=target)
    return true;
    else{
        return false;
    }
}

int getMaxHeightofSaw(int arr[], int n,int target){
    sort(arr,arr+n);
    int s=0;
    int e=arr[n-1];
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossibleSol(mid,arr,n,target)){
            // store ans
            ans = mid;
            //move to right
            s=mid+1;
        }
        else{
            //left
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    int arr[]={15,8,18,6};
    int target=30;
     int ans=getMaxHeightofSaw(arr,4,target);
    cout<<"Answer is "<<ans<<endl;
    return 0;
} 
*/

#include<iostream>  
using namespace std;
int brutef(int arr[],int n){
    int i=0;
    int j=n;
    while(i<j){
    for(int i=0; i<n; i++){
        
    }
    }
}
int main(){
    int arr[]={15,8,18,6};
    int target=30;
}