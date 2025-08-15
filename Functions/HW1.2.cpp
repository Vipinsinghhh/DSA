//write a function to check is a number is prime or not by using boolean data type

#include<iostream>
using namespace std;

int primeOrNot(int n){
    bool isprime=true;

    if(n<=1){
        isprime=false;
    }

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            isprime=false;
        }
    }
    if(isprime){
        cout<<n<<" is a prime number";
    }else{
        cout<<n<<" is not a prime number";
    }
}

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;

    primeOrNot(n);

    return 0;
}