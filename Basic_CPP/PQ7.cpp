// sum of all odd numbers from 1 to n

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sum=0;

    cout<<"enter n:";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum = sum+i;
        }
    }
    cout<<"the sum of all odd numbers is "<<sum<<endl;

    return 0;
}