//print the pyramid pattern
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
