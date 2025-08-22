//Find the largest value index of the array

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"enter the size of array: ";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"enter the value of index "<<i<<" in array: ";
        cin>>arr[i];
    }

    int largestValue = INT_MIN;
    int largestvalueIndex = -1;
    
    for(int i=0;i<size;i++){
        if(arr[i]>largestValue){
            largestValue = arr[i];
            largestvalueIndex = i;
        }
    }

    cout<<"Largest value index of array is: "<<largestvalueIndex;

    return 0;

}