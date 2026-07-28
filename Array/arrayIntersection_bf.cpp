//Intersection of two sorted arrays
//codestudio -  [https://bit.ly/3Il0c7n ]
//brute force approach

#include <bits/stdc++.h> 
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int>ans;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr1[i]==arr2[j]){
				ans.push_back(arr2[j]);
				arr2[j]=-5852582;
				break;
			}
		}
	}
	return ans;
}
int main(){
    vector<int>arr1 = {1,2,3,4,5};
    vector<int>arr2 = {3,4,5,6,7};
    int n = arr1.size();
    int m = arr2.size();
    vector<int>ans = findArrayIntersection(arr1,n,arr2,m);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}   