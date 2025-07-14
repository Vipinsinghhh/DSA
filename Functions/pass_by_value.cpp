#include<iostream>
using namespace std;

int sum(int a,int b){
    a=a+10;
    b=b+10;
    return a+b;
}
int main(){
    int a=5;
    int b=4;
    cout<<sum(a,b)<<endl;  //sum returned by sum function
    cout<<a<<endl;     //value of main function
    cout<<b;           //value of main function
}