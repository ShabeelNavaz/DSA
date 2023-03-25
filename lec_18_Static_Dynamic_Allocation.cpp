/*
//Reference Variable
#include<iostream>
using namespace std;
int main(){
    int i=5;
    //Reference Variable
    int &j=i;
    cout<<i<<endl;
    i++;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;
    return 0;
}
*/

// Dynamic Array
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n  "<<endl;
    cin>>n;
    int *arr=new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Printint the array "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    delete []arr;
    return 0;
}
*/

// 2D array
/*
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int **arr=new int*[m];
    for(int i=0; i<m; i++){
        arr[i]=new int[n];
    }
    //input
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // Print
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    for(int i=0; i<m; i++){
        delete []arr[i]; 
    }
    delete []arr;
    return 0;
}
*/
//Macro
/*
 #include<iostream>
 using namespace std;
 #define PI 3.41
 int main(){
    int r=4;
    double area=PI*r*r;
    cout<<area<<endl;
    return 0;
 }
 */

//Global Variable
/*
#include<iostream>
using namespace std;
int score=0;
void fun1(){
cout<<score<<endl;
score++;
cout<<"One"<<endl;
}
void fun2(){
    cout<<score<<endl;
    score+=2;
    cout<<"Two"<<endl;
}
void fun3(){
    cout<<score<<endl;
    score+=3;
    cout<<"Three";

}
int main(){
fun1();
fun2();
fun3();
return 0;
}
*/

/*
//Constant Variable
#include<iostream>
using namespace std;
int main(){
    const int a=5;
    a++;
    return 0;
     
}
*/

/*
//Inline Function
#include<iostream>
using namespace std;
inline int fun(int x,int y){
    return x+y;
}
int main(){
    int x=2;
    int y=5;
    cout<<fun(x,y)<<endl;
    return 0;

}
*/


