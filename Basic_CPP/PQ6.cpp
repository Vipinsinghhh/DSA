//sum of numbers from 1 to n

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sum=0;

    cout<<"enter n:";
    cin>>n;

    for(int i=0;i<=n;i++){
        sum = sum+i;
    };
    cout<<"sum of all numbers is "<<sum<<endl;

    return 0;
}