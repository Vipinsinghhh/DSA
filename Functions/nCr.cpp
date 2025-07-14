//calculate nCr binomial coefficient for n&r

#include<iostream>
using namespace std;

int calculateFact(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int r;
    cout<<"enter r:";
    cin>>r;

    int factN = calculateFact(n);
    int factR = calculateFact(r);
    int factnMr = calculateFact(n-r);
    
    int nCr = factN/(factR * factnMr);

    cout<<"nCr binomial coefficient for n&r is:"<<nCr<<endl;

    return 0;

}