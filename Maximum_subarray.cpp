//Find the maximum subarray of a given array

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int start = 0; start<size; start++){
        for(int end = start; end<size; end++){
            for(int i=start; i<=end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    int total = (size*(size+1))/2;
    cout<<"Total number of subarray is: "<<total;

    return 0;
}
