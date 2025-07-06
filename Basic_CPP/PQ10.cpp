//sum of all numbers from 1 to N which are divisible by 3

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sum=0;

    cout<<"enter the number";
    cin>>n;

    for(int i=0;i<=n;i++){
        if(i%3==0){
            sum = sum+i;
        }
    }
    cout<<"sum of all numbers which are divisible by 3 is "<<sum<<endl;

    return 0;
}