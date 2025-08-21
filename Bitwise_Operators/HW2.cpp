//Write a function to reverse an integer n

#include<iostream>
using namespace std;

int reverseInt(int num){
     long long int revNum = 0;
    int sign = 1;

    if(num < 0){
        sign = -1;
        num = -num;
    }

    while(num>0){
        int rem = num % 10;
        num = num / 10;
        revNum = revNum * 10 + rem;
    }

    return sign * revNum;
}

int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;

    cout<<"reverse number is: "<<reverseInt(num);

    return 0;
}