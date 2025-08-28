//Write a function to calculate sum and product of all numbers in an array

#include<iostream>
using namespace std;

int sum(int arr[], int size){
    int sum =0;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size= 10;

    cout<<"sum of all numbers in array is: "<<sum(arr,size);

    return 0;
}