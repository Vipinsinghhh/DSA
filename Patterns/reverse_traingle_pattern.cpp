// print reverse traingle pattern
// 1
// 21
// 321
// 4321
// 54321

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
