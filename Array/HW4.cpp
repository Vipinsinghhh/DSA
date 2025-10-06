//Write a function to print intersection of 2 arrays

#include<bits/stdc++.h>
using namespace std;

int Intersection(int arr1[], int arr2[], int size1, int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;  //ek value 2 bar print na ho isliye
            }
        }
    }
}
int main(){
    int arr1[] = {2,4,6,8,10,12,14,16,18,20};
    int arr2[] = {1,2,3,4,5,6,7,8,6,9,10,2};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    Intersection(arr1,arr2,size1,size2);

    return 0;
}