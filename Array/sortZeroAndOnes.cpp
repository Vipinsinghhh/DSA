//sort 0's and 1's

#include<iostream>
using namespace std;

void sortZeroAndOnes(int arr[], int n){
    int left = 0;
    int right = n - 1;

    while(left < right){
        if(arr[left] == 0 && left < right){
            left++;
        }
        if(arr[right] == 1 && left < right){
            right--;
        }
        if(left < right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
int main(){
    int arr[] = {1,1,0,0,0,0,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    sortZeroAndOnes(arr, n);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}