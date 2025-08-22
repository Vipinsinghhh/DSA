//find the index of an array where the smallest value present 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"enter the value of index "<<i<<" of array: ";
        cin>>arr[i];
    }

    int smallestValue = INT_MAX;
    int smallestIndex = -1;

    for(int i=0;i<size;i++){
        if(arr[i] < smallestValue){
            smallestValue = arr[i];
            smallestIndex = i;
        }
    }
    cout<<"smallest index in array is: "<<smallestIndex;

    return 0;
}