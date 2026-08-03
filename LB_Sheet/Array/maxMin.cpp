//https://www.geeksforgeeks.org/dsa/maximum-and-minimum-in-an-array/
//Find the maximum and minimum element in an array
//time complexity is O(n) and space complexity is O(1)

#include <bits/stdc++.h>
using namespace std;

vector<int> getMinMax(vector<int> &arr)
{
    // code here
    vector<int> ans;
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    ans.push_back(min);
    ans.push_back(max);

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    vector<int> ans = getMinMax(arr);

    cout << "Minimum value is: " << ans[0] << endl;
    cout << "Maximum value is: " << ans[1] << endl;

    return 0;
}