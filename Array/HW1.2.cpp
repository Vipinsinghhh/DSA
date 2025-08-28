//write a function to calculate product of all numbers in an array

#include<iostream>
using namespace std;

int product(int arr[], int size){
    int product = 1;
    for(int i=0;i<size;i++){
        product = product * arr[i];
    }
    return product;
}
int main(){

    int arr[10];
    int size = 10;

    cout<<"Enter the numbers you want to store in array: ";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"product of all numbers in array is: "<<product(arr,size);

    return 0;
}