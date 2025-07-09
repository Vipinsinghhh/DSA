//calculate the sum of numbers from 1 to n

#include<bits/stdc++.h>
using namespace std;

int calNum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    cout<<"sum of 1 to n="<<calNum(10);
    return 0;
}