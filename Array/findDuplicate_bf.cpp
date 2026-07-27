//find duplicate elements in array
// CodeStudio - [https://bit.ly/3dm6bdZ]
//brute force
#include<iostream>
using namespace std;

int findDuplicate(int arr[], int size){
    for(int i=0; i<size; i++){
        int count = 0;
        for(int j=0; j<size; j++){
            if(i != j && arr[i] == arr[j]){
                count++;
            }
        }
        if(count > 0){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int arr[5] = {1,2,3,4,3};

    cout << "Duplicate number in array is: "<< findDuplicate(arr, 5);

    return 0;
}