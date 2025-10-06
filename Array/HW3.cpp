//Write a Function to print all the unique values in an array which appears only once in array

#include<bits/stdc++.h>
using namespace std;

int UniqueValues(int arr[], int size){
    for(int i=0;i<size;i++){
        int count = 0;

        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<" ";
        }
    }

}
int main(){
    int arr[] = {1, 2, 3, 2, 4, 5, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Uniquw values are: ";
    UniqueValues(arr,size);

    return 0;
}