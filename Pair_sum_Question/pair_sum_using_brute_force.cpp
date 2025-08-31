//Return pair in sorted array with target sum using brute force method:-

#include<iostream>
#include<vector>
using namespace std;

vector<int> PairSum(int arr[],int size,int target){
    vector<int>nums;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                nums.push_back(arr[i]);
                nums.push_back(arr[j]);
            }
        }
    }
    return nums;
}
int main(){
    int arr[] = {2,7,11,15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 13;

    vector<int>nums = PairSum(arr,size,target);       

    cout<<"Pair of target value sum is: ";
    for(int val: nums){
        cout<<val<<" ";
    }

    return 0;

}