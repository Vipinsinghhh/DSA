//Return indices of pair in sorted array with target sum using brute force method:-

#include<iostream>
#include<vector>
using namespace std;

vector<int> PairSum(int arr[], int size, int target) {
    vector<int> indices;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                // 1-based indexing
                indices.push_back(i + 1);
                indices.push_back(j + 1);
                return indices;  // only one pair needed
            }
        }
    }
    return indices;
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 26;

    vector<int> ans = PairSum(arr, size, target);

    cout << "Indices: ";
    for (int idx : ans) {
        cout << idx << " ";
    }

    return 0;
}
