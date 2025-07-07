// print stars in taringle pattern by using another method(cout<<i+1;)
// A
// BB
// CCC
// DDDD
// EEEEE

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    char ch='A';

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch<<" ";
        }
        ch = ch+1;
        cout<<endl;
    }
    return 0;
}