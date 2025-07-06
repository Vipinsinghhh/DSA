#include<bits/stdc++.h>
using namespace std;

int main(){
    int principle;
    int rateOfInterest;
    int time;

    cout<<"enter principle :";
    cin>>principle;

    cout<<"enter rate of interest :";
    cin>>rateOfInterest;

    cout<<"enter time :";
    cin>>time;

    int simpleInterest;

    simpleInterest= (principle*rateOfInterest*time)/100;

    cout<<"simple intrest of the amount for " << time  <<" years is ="<<simpleInterest;

    return 0;
}