#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;                 //vector creating syntax 1
    
    vector<int>vec = {1,2,3};       //vector creating syntax 2

    vector<int>vec(5,1);            //vector creating syntax 3

    for(int val : vec){             //for each loop
        cout<<val<<" ";
    }

    return 0;
}