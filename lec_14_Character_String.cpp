/*
#include<iostream>
using namespace std;
int main(){
    char name[10];
    cin>>name;
    cout<<name<<endl;
    return 0;
}
*/
/*
//Lenght
#include<iostream>
using namespace std;
int getlength(char arr[]){
    int lenght=0;
    int index=0;
    while(arr[index] != '\0'){
        lenght++;
        index++;
    }
    return lenght;
}
int main(){
    char name[10]="Babbar";
    cout<<"Lenght is-> "<<getlength(name)<<endl;
    return 0;
}
*/
/*
// Reverse
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(char arr[]){
    int n=strlen(arr);
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main(){
    char name[10]="Shabeeel";
    reverse(name);
    cout<<"Reverse is -> "<<name<<endl; 
    return 0;
}
*/
/*
///-----------------------------------String
#include<iostream>
using namespace std;
int main(){
    // ont word print karte h 
// string str;
// cin>>str;
// cout<<"Str is -> "<<str<<endl;

// full line Print karne ke liye
string str;
getline(cin,str);
cout<<"Str is -> "<<str<<endl;
return 0;
} 
*/

// Check Anagram
/*                    
#include<iostream>
using namespace std;
bool checkAnagrm(string a,string b){
    int freq[26]={0};
    for(int i=0; i<a.length(); i++){
        char ch=a[i];
        int index=ch-'a';
        freq[index]++;
    }
    for(int i=0; i<b.length(); i++){
        char ch=b[i];
        int index=ch-'a';
        freq[index]--;
    }
    for(int i=0; i<26; i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}
int main(){
    string a="babbar";
    string b="aabbbr";
    cout<<"Anagram "<<checkAnagrm(a,b)<<endl;
    return 0;
}

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char flip(char expected){
    if(expected == '0')
    return '1';
    else
        return '0';
    
}
int getFlips(string str,char expected){
    int cntFlips=0;
    for(int i=0; i<str.length(); i++){
        if(str[i] != expected)
        cntFlips++;
        expected=flip(expected);
    }
    return cntFlips;
}
int main(){
    string str="0010";
    int ans0=getFlips(str,'0');
    int ans1=getFlips(str,'1');
    int ans=min(ans0,ans1);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}
