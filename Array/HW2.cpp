//write a function to swap the max and mun value of an array

#include <bits/stdc++.h>
using namespace std;

int swapMaxMin(int arr[], int size){
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int largestvalueindex = -1;
    int smallestvalueindex = -1;

    for(int i=0;i<size;i++){
        // largest = max(arr[i],largest);
        // smallest = min(arr[i],smallest);

        if(arr[i]>largest){
            largest = arr[i];
            largestvalueindex = i;
        }
        if(arr[i]<smallest){
            smallest = arr[i];
            smallestvalueindex = i;
        }
    }
    swap(arr[largestvalueindex],arr[smallestvalueindex]);


}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"original array:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    swapMaxMin(arr,size);

    cout<<"swaped min and max value array:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}