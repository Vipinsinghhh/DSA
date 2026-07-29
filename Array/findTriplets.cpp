//3sum
//Triplet sum [https://bit.ly/3GbgVs3]


#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {

    vector<vector<int>> ans;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){

                if(arr[i] + arr[j] + arr[k] == K){

                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);

                    sort(temp.begin(), temp.end());

                    // duplicate check WITHOUT range-based loop
                    bool isDuplicate = false;
                    for(int x = 0; x < ans.size(); x++){
                        if(ans[x][0] == temp[0] &&
                           ans[x][1] == temp[1] &&
                           ans[x][2] == temp[2]){
                            isDuplicate = true;
                            break;
                        }
                    }

                    if(!isDuplicate){
                        ans.push_back(temp);
                    }
                }
            }
        }
    }
    return ans;
}

int main(){
    vector<int>arr = {10,5,5,5,2};

    int targatedTriplet = 12;

    int size = arr.size();

    vector<vector<int>>ans = findTriplets(arr,size,targatedTriplet);

    for(int i=0; i<ans.size(); i++){
        cout<< "(" << ans[i][0] << "," << ans[i][1] << "," <<ans[i][2] << ")";
    }
    return 0;
}
