//Find unique number from the array which appeared only once in the array
// This code only works when the array contains exactly one unique value and all other values appear exactly twice.
//Ex:- {1,1,2,2,3,3,4}
 

#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>&nums){
    int ans =0;
    for(int val: nums){
        ans = ans ^ val;
    }
    return ans;
}
int main(){
    vector<int>nums = {4,1,2,1,2};

    cout<<"unique number in array is: "<<singleNumber(nums);

    return 0;
}