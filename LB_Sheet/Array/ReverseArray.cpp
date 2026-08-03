// C++ program to reverse an array
// time complexity is O(n) and space complexity is O(1)

#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr) {
        // code here
        int i=0;
        int j = arr.size()- 1;
        
        while(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
            
        }
    }

int main(){
    vector<int>arr = {1,2,3,4,5};
    reverseArray(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}