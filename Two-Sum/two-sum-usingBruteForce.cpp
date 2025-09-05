//TWO SUM LEETCODE

#include<iostream>
#include<vector>
using namespace std;

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>indices;

    int size = nums.size();

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            int ans = nums[i]+nums[j];
            if(ans == target){
                indices.push_back(i);
                indices.push_back(j);
                return indices;
            }
        }
    }
    return indices;
        
    }
    int main(){
        vector<int>nums = {4,5,9,11};
        int target = 9;

        vector<int>ans = twoSum(nums,target);

        for(int idx : ans){
            cout<<idx<<" ";
        }

        return 0;
    }