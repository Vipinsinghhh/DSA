// print inverted traingle pattern
// AAAAA
//  BBBB
//   CCC
//    DD
//     E

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    char ch='A';

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<ch;
        }
        ch=ch+1;
        cout<<endl;
    }
    return 0;
}