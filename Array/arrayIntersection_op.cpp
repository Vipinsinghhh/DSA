//Intersection of two sorted arrays
//codestudio -  [https://bit.ly/3Il0c7n ]
//optimized approach

#include <bits/stdc++.h> 
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{

	int i=0;
	int j=0;
	vector<int>ans;
	while(i<n&&j<m){
		if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}else if(arr1[i]<arr2[j]){
			i++;
		}else{
			j++;
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