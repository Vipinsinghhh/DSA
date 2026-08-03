//https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1
// C++ program to find the Kth smallest element in an array
// time complexity is O(nlogn) and space complexity is O(1)

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int kthSmallest(vector<int> &arr, int k) {
        
        sort(arr.begin(), arr.end());
        
        return arr[k-1];

    }

int main(){
    vector<int>arr = {7,10,4,3,20,15};
    int k = 3;
    cout << "The " << k << "rd smallest element is: " << kthSmallest(arr, k) << endl;
    return 0;
}