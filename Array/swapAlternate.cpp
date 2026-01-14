//swap alternate elements of array

#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for(int i=0;i<size;i=i+2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int evenArr[8] = {5,2,9,4,7,6,1,0};
    int oddArr[5] = {11,33,97,64,3};

    swapAlternate(evenArr,8);
    printArray(evenArr,8);

    cout<<endl;

    swapAlternate(oddArr,5);
    printArray(oddArr,5);

    return 0;
}