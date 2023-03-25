// Initialise with 0 
/*
#include<iostream>
using namespace std;
int main(){
    //Creation
    int arr[3][3];
    int n=3;
    //Input
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    //Print 2D matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

// Initialse Frist element with 1 and rest 0
/*
#include<iostream>
using namespace std;
int main(){
    //Creation
    int arr[3][3]={0};
    int n=3;
    //Print 2D matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

//initialse 2D array like 1D array
/*
#include<iostream>
using namespace std;
int main(){
    //Creation
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int n=3;
    
    //Print 2D matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
//Initialise 3D array row/col wise
/*
#include<iostream>
using namespace std;
int main(){
    //Creation
    int arr[3][3]={1};
    int n=3;
    
    //Print 2D matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

//Search in a element
/*
#include<iostream>
using namespace std;
bool search(int arr[3][3],int n,int m,int target){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<"Search in element -> "<<search(arr,3,3,15 );
    return 0;
}
*/

// the Row wise sum
/*
#include<iostream>
using namespace std;
void rowSum(int arr[][3],int i,int j){
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<3; j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    rowSum(arr,3,3);
    return 0;
}
*/

// the Column wise sum
/* 
#include<iostream>
using namespace std;
void colSum(int arr[4][2],int row,int col){
for(int i=0; i<col; i++){
    int sum=0;
    for(int j=0; j<row; j++){
        sum=sum+arr[j][i];
    }
    cout<<sum<<" ";
}
cout<<endl;
}
int main(){
    int arr[4][2]={1,2,2,3,3,4,4,5};
    colSum(arr,4,2);
    return 0;
}
*/

//  2D array rotate by 90 degree (Transpose)
/*
#include<iostream>
using namespace std;
//void reverse(int arr[3][3])
void transpose(int arr[3][3],int n,int m){   
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i ; j++){
            swap(arr[i][j],arr[j][i]); 
        }
    }

}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    transpose(arr,3,3);
    return 0;
}
*/

// Spiral
#include<iostream>
using namespace std;
void Spiral(int arr[4][4]){
    int startingRow=0;
    int startingCol=0;
    int endRow=0;
    int endCol=0;
    int count=0;
    int total=0;
    while(count < total){
        for(int i=startingCol; i<endCol; i++){
            count++;
            cout<<arr[startingRow][i];
        }
            startingRow++;
        for(int i=startingRow; i<endRow; i++){
            count++;
            cout<<arr[i][endCol];
        }
            endCol--;
        for(int i=endCol; i<startingCol; i++){
            count++;
            cout<<arr[endRow][i];
        }
            endRow--;
        for(int i=endRow; i<startingRow; i++){
            count++;
            cout<<arr[i][startingCol];
        }
        startingCol++;
    }

}
int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    cout<<"Printing "<<Spiral<<endl;
    /*for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
    return 0;
}
