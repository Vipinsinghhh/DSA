//convert binary numbers to decimal numbers

#include<iostream>
using namespace std;

int main(){
    int binNum;
    cout<<"Enter binary number: ";
    cin>>binNum;

    int ans=0;
    int pow =1;

    while(binNum>0){
        int rem = binNum % 10;
        binNum = binNum / 10;
        ans = ans + (rem * pow);
        pow = pow * 2;
    }
    cout<<ans;

    return 0;
}