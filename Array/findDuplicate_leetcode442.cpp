//find all duplicates of an array
//leetcode - [https://leetcode.com/problems/find-all-duplicates-in-an-array/description/]
//brute force
//time complexity - O(n^2)
//space complexity - O(1)

#include<iostream>
#include<vector>
using namespace std;

 vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0; i<nums.size(); i++){
            int count = 0;
            for(int j = 0; j<nums.size(); j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count == 2){
                bool alreadyPresent = false;

                for(int k = 0; k<ans.size(); k++){
                    if(ans[k] == nums[i]){
                        alreadyPresent = true;
                        break;
                    }
                }

                if(!alreadyPresent){
                    ans.push_back(nums[i]);
                }
            }
        }
        return ans;
    }

    int main(){

        vector<int>nums = {4,3,2,7,8,2,3,1};

        vector<int>ans = findDuplicates(nums);

        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }

        return 0;
        
    }
