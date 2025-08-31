//find maximum subarray sum using kadanes algorithm

#include <bits/stdc++.h>
#include<vector>
using namespace std;

int MaxSum_SubArray(vector<int>&nums){
    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int val: nums){
        currentSum = currentSum + val;
        maxSum = max(currentSum, maxSum);

        if(currentSum < 0){
            currentSum = 0;
        }
    }
    return maxSum;
}
int main(){
    vector<int>nums = { 3,-4,5,4,-1,7,-8};

    cout<<"maximum subarray sum is:"<<MaxSum_SubArray(nums);

    return 0;
}