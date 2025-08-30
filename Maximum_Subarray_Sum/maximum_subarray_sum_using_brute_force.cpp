//Find Maximum subarray sum using brute force method:-

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,-4,5,4,-1,7,-8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxSum = INT_MIN;

    for(int start=0; start<size; start++){
        int currentSum = 0;
        for(int end=start; end<size; end++){
            currentSum = currentSum + arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout<<"Maximum subarray Sum is: "<<maxSum;

    return 0;
}