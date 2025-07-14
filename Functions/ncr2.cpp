//calculating nCr binomial coefficient for n&r also create separte functions of each work

#include<iostream>
using namespace std;

int calculateFact(int num){
    int fact = 1;
    for(int i=1;i<=num;i++){
        fact = fact*i;
    }
    return fact;
}

int calculate_nCr(int n,int r){
    int factN= calculateFact(n);
    int factR= calculateFact(r);
    int factnMr = calculateFact(n-r);

    return factN/(factR * factnMr);
}

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int r;
    cout<<"enter r:";
    cin>>r;

    cout<<"nCr binomial coefficient for n&r is:"<<calculate_nCr(n,r)<<endl;

    return 0;
    
}