#include<iostream>
using namespace std;

void sortArray(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main(){
    int arr[] = {1,1,0,0,0,0,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    sortArray(arr, n);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}