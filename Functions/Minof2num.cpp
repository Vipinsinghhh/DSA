//program to print teh minimum of 2 numbers by using functions

#include<bits/stdc++.h>
using namespace std;

int min2num(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int main(){
   cout<<min2num(5,10);
    return 0;
}