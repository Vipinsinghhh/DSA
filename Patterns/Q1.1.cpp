//print alphabets in a pattern

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"enter the number:";
    cin>>n;

    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch= ch+1;
        }
        cout<<endl;
    }
    return 0;
}