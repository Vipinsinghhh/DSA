//Find Majority Element in array using Moore's voting algorithm

#include<bits/stdc++.h>
using namespace std;

int majority(vector<int>&nums){
    int size = nums.size();

    int freq = 0;
    int ans = 0;

    for(int i=0;i<size;i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int>nums = {1,2,2,2,2,1,1};

    cout<<"majority element is: "<<majority(nums);

    return 0;
}