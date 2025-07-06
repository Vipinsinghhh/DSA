// check if a number is prime number or not

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool isprime=true;

    cout<<"enter the number:";
    cin>>n;

    for (int i=2;i<=n-1;i++){
        if(n%i==0){
            isprime = false;
            break;
        }
    }
    if(isprime == true){
        cout<<"it is a prime number";
    }else{
        cout<<"it is not a prime number";
    }
    return 0;
}