//Find Majority Element in array , floor n/2

#include <bits/stdc++.h>
using namespace std;

int MajorityElement(int arr[],int size){

    for(int i=0;i<size;i++){
        int count =0;

        for(int j=0;j<size;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > size/2){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,2,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    MajorityElement(arr,size);

    if(MajorityElement(arr,size) != -1){
        cout<<"Majority element is: "<<MajorityElement(arr,size);
    }else{
        cout<<"Majority element doesn't exist";
    }
    return 0;
}