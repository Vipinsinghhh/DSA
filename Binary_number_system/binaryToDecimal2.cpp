//convert binary numbers to decimal number by using function

#include<iostream>
using namespace std;

int binaryToDecimal(int binNum){

    int ans =0;
    int pow = 1;

    while(binNum>0){
        int rem = binNum % 10;
        binNum = binNum / 10;
        ans = ans + (rem * pow);
        pow = pow * 2;
    }
    return ans;
}

int main(){
    int binNum;
    cout<<"Enter Binary Number:";
    cin>>binNum;

    cout<<binaryToDecimal(binNum);

    return 0;
}