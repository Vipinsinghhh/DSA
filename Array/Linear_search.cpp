//searching the value in array using linear search algorithm

#include<iostream>
using namespace std;

int searchTarget(int arr[], int target, int size){
     for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]= {4,2,7,8,1,2,5};
    int target = 8;
    int size = 7;

    cout<<"Target value index is: "<<searchTarget(arr,target,size);

    return 0;
}