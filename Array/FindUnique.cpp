//Find unique element in array
//optimsed approach

#include<iostream>
using namespace std;

int findUnique(int arr[], int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}



int main(){
    int arr[] = {1,3,1,3,6,6,7,10,7};

    cout<<"the unique element in array is: "<<findUnique(arr,9)<<endl;

    return 0;
}


//less optimised approach
// #include<iostream>
// using namespace std;

// int findUnique(int arr[], int size){
//     for(int i=0;i<size;i++){
//         int count =0;
//         for(int j=0;j<size;j++){
//             if(i != j && arr[i] == arr[j]){
//                 count ++;
//             }
//         }
//         if(count ==0){
//             return arr[i];
//         }
//     }
//     return -1;
// }

// int main(){
//     int arrA[9] = {1,1,3,3,8,4,4,2,2};
//     int arrB[5] = {2, 4, 2, 3, 3};

//     cout << "unique number in arrayA is: "<<findUnique(arrA,9);

//     cout << endl;

//     cout << "unique number in arrayB is: "<<findUnique(arrB,5);

//     return 0;
// }
