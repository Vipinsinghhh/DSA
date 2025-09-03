//Optimsed way of solving Majority Element question

#include <bits/stdc++.h>
using namespace std;

int majority(int arr[], int size){
    sort(arr, arr+size);

    return arr[size/2];
}
int main(){
    int arr[] = {1,2,2,1,1,1,};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"Majority Element is:"<<majority(arr,size);

    return 0;
}