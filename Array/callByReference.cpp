//explaining the call by reference concept:-

#include<iostream>
using namespace std;

int changeArr(int arr[], int size){
    for(int i=0;i<size;i++){
        arr[i] = 2 * arr[i];
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    changeArr(arr, 5);

    cout<<"changed array is:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}