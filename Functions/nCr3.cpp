//calculating nCr binomial coefficient for n&r also create separte functions of each work

#include<iostream>
using namespace std;

int calculateFact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact= fact*i;
    }
    return fact;
}

int calculate_nCr(int n,int r){
    int factN = calculateFact(n);
    int factR = calculateFact(r);
    int factNminusR = calculateFact(n-r);

    return factN/(factR*factNminusR);
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    
    int r;
    cout<<"enter r:";
    cin>>r;

    cout<<"factorial of n is: "<<calculateFact(n)<<endl;
    cout<<"factorial of r is: "<<calculateFact(r)<<endl;

    // int FactN = calculateFact(n);
    // int FactR = calculateFact(r);

    // int nCr = FactN/FactR;

    // cout<<"final="<<nCr*calculate_nMinusr(n,r);

    cout<<"nCr binomial coefficient for n&r is= "<<calculate_nCr(n,r);

    return 0;
}