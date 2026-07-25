//Reverse an array using 2 pointers approach


//using inbuilt swap function
#include<iostream>
using namespace std;

int reverseArr(int arr[], int size){
    int start =0;
    int end = size-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;

    reverseArr(arr, size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


//using temp variable

// #include <iostream>
// using namespace std;

// void reverseArr(int arr[], int size){
//     int start = 0;
//     int end = size - 1;
//     while(start < end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//     start++; 
//     end--;
//     }
// }
// int main() {
    
//     int arr[5] = {1,2,3,4,5};
    
//     reverseArr(arr,5);
    
//     cout << "reversed array is: ";
    
//     for (int i=0; i<5; i++){
//         cout << arr[i] << "  ";
//     }

//     return 0;
// }


//using for loop

// #include <iostream>
// using namespace std;

// void reverseArr(int arr[], int size){
    
//     for(int i=0;i<size/2;i++){
//         int temp = arr[i];
//         arr[i] = arr[size-i-1];
//         arr[size-i-1] = temp;
//     }
// }

// int main() {

// int arr[5] = {1,2,3,4,5};

// reverseArr(arr, 5);

// cout << "Reversed array is: ";

// for (int i =0; i< 5; i++){
//     cout<< arr[i] << "  ";
// }

//     return 0;
// }