//find the largest value in array using MAX function

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

    int largest = INT_MIN;

    for(int i=0;i<size;i++){
       largest = max(arr[i],largest);         //here max function used
    }
    
    cout<<"largest value in array is: "<<largest;

    return 0;
}