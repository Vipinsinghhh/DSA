//write a function to check is number is prime or not by using boolean return type function

#include<iostream>
using namespace std;

bool primeOrnot(int n){
    if(n<=1){
        return false;
    }

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"enter number:";
    cin>>n;

    if(primeOrnot(n)){
        cout<<n<<" is a prime number";
    }else{
        cout<<n<<" is not a prime number";
    }
    return 0;
}