// convert decimal numbers to the binary number

#include<iostream>
using namespace std;

int main(){

    int decNum;
    cout<<"enter decimal number:";
    cin>>decNum;

    int ans =0 ;
    int pow = 1;

    while(decNum>0){
        int rem = decNum%2;
        decNum = decNum/2;

        ans = ans + (rem * pow);
        pow = pow * 10;
    }

    cout<<ans<<endl;

    return 0;
}