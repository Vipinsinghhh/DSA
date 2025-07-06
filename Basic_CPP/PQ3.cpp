// calculate factorial of a number N.

#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     int fact=1;

     cout<<"enter number:";
     cin>>n;

     for(int i=n;i>=1;i--){
        fact = fact*i;
     };

     cout<<"factorial of "<<n <<"is "<<fact<<endl;

     return 0;
}