//calculate N factorial

#include<bits/stdc++.h>
using namespace std;

void calfactorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
}
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    calfactorial(n);
    return 0;
}