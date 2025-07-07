//print a numbers in square pattern

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number you wnat to print a row:";
    cin>>n;

    int num=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}