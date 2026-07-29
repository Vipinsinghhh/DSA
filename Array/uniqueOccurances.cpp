//Unique Number of Occurrences
//leetcode 1207
//its not a good solution but it works
//hashmap can be used to solve this problem in O(n) time complexity

#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {

        sort(arr.begin(), arr.end());

        vector<int> freq;

        int count = 1;

        for(int i = 1; i < arr.size(); i++) {

            if(arr[i] == arr[i - 1]) {
                count++;
            } else {
                freq.push_back(count);
                count = 1;
            }
        }

        freq.push_back(count);

        sort(freq.begin(), freq.end());

        for(int i = 1; i < freq.size(); i++) {
            if(freq[i] == freq[i - 1])
                return false;
        }

        return true;
    }

    int main(){
        
        vector<int>arr = {1,2,2,1,1,3};

        bool ans = uniqueOccurrences(arr);

        if(ans){
            cout<<"true"<<endl;
        }else{
            cout<<"false"<<endl;
        }

        return 0;   
    }