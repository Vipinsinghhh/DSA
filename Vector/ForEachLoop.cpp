//For each loop in vector used for retriving the data from vector or access the value of an vector

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char>vec = {'a','b','c','d','e'};

    for(char val : vec){    //it is used when we want to access the value stored in array in all the sections
        cout<<val<<" ";     
    }
    return 0;
}