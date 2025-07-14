//calculate the sum of digits of a number

#include<iostream>
using namespace std;

int sumOfDigits(int num){
    int sumDigit=0;

    while(num>0){
        int lastDigit=num%10;
        num=num/10;
        sumDigit = sumDigit + lastDigit;
    }
    return sumDigit;
}

int main(){

    int num;
    cout<<"enter the digit:";
    cin>>num;

    cout<<"sum of numbers of your digit is="<<sumOfDigits(num)<<endl;

    return 0;

}