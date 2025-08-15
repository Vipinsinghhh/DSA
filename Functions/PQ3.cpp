//sum of digits

#include<iostream>
using namespace std;

int sumOfDigits(int num){

    int sumDigits =0;

    while(num>0){
    sumDigits = sumDigits + num % 10;
    num = num/10;
}
    return sumDigits;
}

int main(){

    int x;
    cout<<"Enter number:";
    cin>>x;
    cout<<sumOfDigits(x);
    return 0;
}