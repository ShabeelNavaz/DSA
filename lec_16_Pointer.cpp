//  Pointer
/*
// Print of Address
#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    cout<<&a<<endl;
    cout<<sizeof(p)<<endl; 
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void func(int *p){
    p=p+1;
}
int main(){
    int a=5; 
    int *p=&a;
    cout<<"Before "<<p<<endl;
    cout<<"Befor "<<*p<<endl;
    func(p);
    cout<<"After "<<p<<endl;
    cout<<"Aftar "<<*p<<endl;
}
*/
/*

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;
    cout<<*arr<<endl;  
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*(arr+4)<<endl;
    int i=0;
    cout<<i[arr]<<endl;
    return 0;
}
*/
/*
//-----------------------------Double Pointer
#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    int **q=&p;
    int ***s=&q;
    int ****e=&s;
    int *****w=&e;
    int ******r=&w;
    int *******t=&r;
    int ********y=&t;
    int *********u=&y;
    int **********i=&u;
    int ***********o=&i;
    int ************z=&o;
    int *************x=&z;
    cout<<&q<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    cout<<***s<<endl;
    cout<<s<<endl;
    cout<<s+**q<<endl;
    cout<<z<<endl;
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

void func1(int** q) {
    q = q+1;
}

void func2(int** q) {
    *q = *q+1;
}

void func3(int** q) {
    **q = **q+1;
}


int main() {

    int a = 5;

    int* p = &a;

    int** q = &p;

    // cout << &a << endl;
    // cout << a << endl;
    //cout << *a << endl;

    // cout << &p << endl;
    // cout << p << endl;
    // cout << *p << endl;

    // cout << &q << endl;
    // cout << q << endl;
    // cout << *q << endl;
    // cout << **q << endl;

    // cout << "before " << q << endl;
    // cout << "before " << *q << endl;
    // cout << "before " << **q << endl;

    // func1(q);

    // cout << "after " << q << endl;
    // cout << "after " << *q << endl;
    // cout << "after " << **q << endl;

    // cout << "before " << q << endl;
    // cout << "before " << *q << endl;
    // cout << "before " << **q << endl;

    // func2(q);

    // cout << "after " << q << endl;
    // cout << "after " << *q << endl;
    // cout << "after " << **q << endl;

    //cout << "before " << q << endl;
    //cout << "before " << *q << endl;
    //cout << "before " << **q << endl;

    func3(q);

    cout << "after " << q << endl;
    cout << "after " << *q << endl;
    cout << "after " << **q << endl;

    cout << "before " << q << endl;
    cout << "before " << *q << endl;
    cout << "before " << **q << endl;
    
    cout << "Sab sahi chal rha h " << endl;
    return 0;
}
*/
//-------------------Question for pointer 
/*
#include<iostream>
using namespace std;
int main(){
    float f=10.5;
    float p=2.5;
    float *ptr=&f;
    (*ptr)++;
    *ptr=p;
    cout<<*ptr<<" "<<f<<" "<<p;
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    int a=7;
    int b=17;
    int *c=&b;
    *c=7;
    cout<<a<<" "<<b<<endl;
    return 0;
}
/*
#include<iostream>
using namespace std;
int main(){
    int *ptr=0;
    int a=10;
    int *ptr=a;
    cout<<*ptr<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    char ch='a';
    char *ptr=&ch;
    ch++;
    cout<<*ptr<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a=7;
    int *c=&a;
    c=c+1;
    cout<<"a is-> "<<a << *c<<endl;
    return 0;

}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a=7;
    int *c=&a;
    c=c+3;
    cout<<c<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    double a=10.54;
    double *d=&a;
    d=d+1;
    cout<<d<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a[5];
    int *c;
    cout<<sizeof(a) <<sizeof(c)<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4};
    cout<<*a <<*(a+1);
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4};
    int *p=a++;
    cout<<*p<<endl;
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,7};
    int *p=(arr+1);
    cout<<*arr+9;
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
void square(int *p){
    int a=10;
    p=&a;
    *p=(*p)*(*p);
}
int main(){
    int a =10;
    square(&a);
    cout<<a<<endl;
    return 0;
}
*/

