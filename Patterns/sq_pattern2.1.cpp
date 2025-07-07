//print alphabets in the square pattern in continous form without reseting the value after starting outer loop

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number for how many alphabets you wnat to print a row: ";
    cin>>n;
    char ch='A';

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch = ch+1;
        }
        cout<<endl;
    }
    return 0;
}