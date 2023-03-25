 /*
 #include<iostream>
 using namespace std;
 int main(){
    int n=4;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
 }
 */

// Half
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

*/



#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i-1; j++){
            cout<<" ";
        }
        for(int j=1; j<=n-i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

/*
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i-1; j++){
            cout<<" ";
        }
        for(int j=1; j<=n-i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
        return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i-1; j++){
            cout<<" ";
        }
        for(int  j=1; j<=n-i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/
//Print a solid rectangle
/*
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/
// Print Half Pyramid Pattern using Stars
/*
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/
//Print an Inverted Half pyramid
/*
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

*/
/*
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}
*/
// Print Half Pyramid using numbers
/*
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
//Print Inverted Half Pyramid using numbers
/*
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
// Print Half Pyramid using numbers - 2
/*
#include<iostream>
using namespace std;
int main(){
    int n=5; 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
//  Print Inverted Half Pyramid using numbers - 2
/*
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
// Print Floyd's Triangle
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int number=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<number<<" ";
              number++;
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}
*/