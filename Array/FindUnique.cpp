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