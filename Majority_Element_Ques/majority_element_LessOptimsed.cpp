#include<bits/stdc++.h>
using namespace std;

int majority(int arr[], int size){
    sort(arr, arr+size);

    int count = 1; int ans = arr[0];

    for(int i=1;i<size;i++){
        if(arr[i] == arr[i-1]){
            count++;
        }else{
            count =1;
            ans = arr[i];
        }
        if(count > size/2){
            return ans;
        }
    }
    return ans;
}
int main(){
    int arr[] = {1,2,9,5,4,2,2,2,2};
    int size = sizeof(arr)/ sizeof(arr[0]);

    cout<<majority(arr,size);

    return 0;
}
