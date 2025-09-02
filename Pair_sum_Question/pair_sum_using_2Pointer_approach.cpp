//Return indices of pair in sorted array with target sum using 2 pointer approach:-
//Time Complexity = o(n)

#include<iostream>
#include<vector>
using namespace std;

vector<int>pairSum(int arr[],int size,int target){
    vector<int>indices;

    int start = 0;
    int end = size-1;

    while(start<end){
        int pairsum = arr[start]+arr[end];

        if(pairsum > target){
            end--;
        }else if(pairsum < target){
            start++;
        }else if(pairsum == target){
            indices.push_back(start);
            indices.push_back(end);
            return indices;
        }
    }
}
int main(){
    int arr[] = {2,7,11,15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 13;

    vector<int>ans = pairSum(arr,size,target);

    cout<<"indices are: ";
    for(int idx : ans){
        cout<<idx<<",";
    }

    return 0;

}