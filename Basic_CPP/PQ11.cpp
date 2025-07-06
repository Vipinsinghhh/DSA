//print factorial of a number N

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int fact=1;

    cout<<"enter the number:";
    cin>>n;

    cout<<"factorial of =";
    for(int j=n;j>=2;j--){
        cout<<j<<"*";
    }
    cout<<"1=";

    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}