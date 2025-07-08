// print inverted traingle pattern
// 1111
//  222
//   33
//    4  

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){ //for space
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){ //for printing number after space
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}