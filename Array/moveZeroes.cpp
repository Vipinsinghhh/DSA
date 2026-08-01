//move all zeroes to the end of the array while maintaining the relative order of the non-zero elements.
//leetcode 283
//this is a good solution with O(n) time complexity and O(1) space complexity

#include<bits/stdc++.h>
using namespace std;


void moveZeroes(vector<int>& nums) {

        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }

int main() {
    
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


#include <bits/stdc++.h>
using namespace std;



//less optimal solution with O(n) time complexity and O(n) space complexity

// Solution class
// class Solution {
// public:
//     // Function to move all zeroes to end
//     vector<int> moveZeroes(vector<int>& arr) {
//         // Create temp array
//         vector<int> temp(arr.size(), 0);

//         // Pointer to fill temp
//         int index = 0;

//         // Traverse input array
//         for (int i = 0; i < arr.size(); i++) {
//             // If non-zero, add to temp
//             if (arr[i] != 0) {
//                 temp[index] = arr[i];
//                 index++;
//             }
//         }

//         // Copy back temp to original
//         for (int i = 0; i < arr.size(); i++) {
//             arr[i] = temp[i];
//         }

//         // Return updated array
//         return arr;
//     }
// };

// // Main function
// int main() {
//     vector<int> arr = {0, 1, 0, 3, 12};
//     Solution sol;
//     vector<int> result = sol.moveZeroes(arr);

//     // Print result
//     cout << "Array after moving zeroes: ";
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }
