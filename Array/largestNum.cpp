//find largest value in array

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"enter the size of an array: ";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"enter the value of "<<i<<" index in array: ";
        cin>>arr[i];
    }

    int largest = INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    cout<<"largest number in array is:"<<largest<<endl;

    return 0;
}