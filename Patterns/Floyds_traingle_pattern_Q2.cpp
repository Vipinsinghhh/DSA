//print the floyds traingle pattern
// A
// B C
// D E F
// G H I J

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    char ch='A';

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}