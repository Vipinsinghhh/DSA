// calculate max of 2 nnumbers

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1;
    int num2;
    int maxnum;

    cout<<"enter number 1 : ";
    cin>>num1;

    cout<<"enter number 2 : ";
    cin>>num2;

    if(num1 > num2){
        maxnum = num1;
        cout<<"num1 is greater then num2 = "<< maxnum;
    }else{
        maxnum = num2;
        cout<<"num2 is greater then num1 = "<<maxnum;
    }

    return 0;
}