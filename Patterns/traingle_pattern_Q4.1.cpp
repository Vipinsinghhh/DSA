// print stars in taringle pattern by using another method(cout<<i+1;)
// 1
// 12
// 123
// 1234
// 12345

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}