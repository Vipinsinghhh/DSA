#include<bits/stdc++.h>
#include<vector>
using namespace std;

int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        
        return arr[k-1];
}

int main(){
    
    vector<int>arr = {7,10,4,3,20,15};

    int k = 3;

    cout<<"kthSmallest: "<<kthSmallest(arr, k)<<endl;

    return 0;   
}