//find the smallest value in array using MIN function

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"enter the value of array index: "<<i<<endl;
        cin>>arr[i];
    }

    int smallest = INT_MAX;

    for(int i=0;i<size;i++){
       smallest = min(arr[i],smallest);         //here min function used
    }
    
    cout<<"smalllest value in array is: "<<smallest;

    return 0;
}