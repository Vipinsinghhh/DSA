//print all the prime numbers from 2 to n

#include<iostream>
using namespace std;

int primeNumbers(int n){
    bool isprime = true;

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            isprime = false;
            return isprime;
            break;
        }
    }
    isprime= true;

    
}

int main(){
    int num;
    cout<<"enter the number:";
    cin>>num;

    for(int i=2;i<=num;i++){
        if(primeNumbers(i)){
            cout<<i<<" ";
        }
    }
    return 0;

}