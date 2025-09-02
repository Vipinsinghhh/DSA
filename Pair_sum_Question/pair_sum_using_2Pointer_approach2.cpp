//Return indices of pair in sorted array with target sum using 2 pointer approach:-
//Time Complexity = o(n)
//in this i passes the vector directly to the function

#include<iostream>
#include<vector>
using namespace std;

vector<int>pairSum(vector<int>&numbers, int target){
    vector<int>indices;

    int size = numbers.size();
    int start = 0;
    int end = size-1;

    while(start<end){
        int pairsum = numbers[start]+numbers[end];

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
    return {};
}
int main(){
    vector<int>numbers = {2,7,11,15};
    int size = numbers.size();
    int target = 13;

    vector<int>ans = pairSum(numbers,target);

    cout<<"indices are: ";
    for(int idx : ans){
        cout<<idx<<",";
    }

    return 0;

}