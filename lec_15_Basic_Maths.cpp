/*
#include<iostream>
#include<vector>
using namespace std;
int soe(int n){
    int cnt=0;
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2; i<n; i++){
        if(prime[i])
        cnt++;
        for(int j=2*i; j<n; j=j+i){
            prime[j]=0;
        }
    }
    return cnt;
}
int main(){
    int n=30;
    cout<<"Count is "<<soe(n)<<endl;
    return 0;
} 

*/

/*
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==b)
    return b;
    if(b==0)
    return a;
    while(a!=b){
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    return a;
}
int main(){
    int a=24;
    int b=72;
    int ans= gcd(a,b);
    cout<<"Ans is-> "<<ans<<endl;
    return 0;
} 
*/
