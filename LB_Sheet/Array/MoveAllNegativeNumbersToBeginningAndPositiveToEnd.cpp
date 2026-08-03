//https://www.geeksforgeeks.org/dsa/move-negative-numbers-beginning-positive-end-constant-extra-space/
// C++ program to separate negative and positive numbers in an array



//time complexity: O(nlogn)
//space complexity: O(1)

#include <bits/stdc++.h> 
using namespace std;

vector<int> separateNegativeAndPositive(vector<int> &nums){
    sort(nums.begin(), nums.end());
    return nums;
}

int main() {
    vector<int> nums = {1, -2, 3, -4, 5, -6};
    vector<int> result = separateNegativeAndPositive(nums);
    
    cout << "Separated array: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}

//-------------------------------------------------------------------------------------------------------

//optimized solution
//time complexity: O(n)
//space complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

vector<int> move(vector<int> &arr) {
    int j = 0;
    for (int i=0; i<arr.size(); i++) {
        
        // If negative number is present
        // swap it with arr[j]
        if (arr[i]<0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    
    return arr;
}

int main() {
    vector<int> arr = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    vector<int> ans = move(arr);
    
    for (auto num: ans) {
        cout << num << " ";
    }
    cout<<endl;

    return 0;
}