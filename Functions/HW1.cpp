//write a function to check if a number is prime or not

#include<iostream>
using namespace std;

int primeOrNot(int n){
    int count=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==1){
        cout<<"prime number";
    }else{
        cout<<"not a prime number";
    }
}

int main(){

    int n;
    cout<<"enter number:";
    cin>>n;
    primeOrNot(n);
    return 0;
}