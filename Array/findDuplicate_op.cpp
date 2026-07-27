//find dupliacte element in array
// CodeStudio - [https://bit.ly/3dm6bdZ]
//optimised approach

#include<iostream>
using namespace std;

int findUnique(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    for(int i=1; i<size;i++){
        ans = ans^i;
    }
    return ans;
}

int main(){
    int arr[5] = {1,2,3,4,3};

    cout<<"Duplicate element in array is: "<<findUnique(arr,5);

    return 0;
}