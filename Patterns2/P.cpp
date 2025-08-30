/*
12345
2345
345
45
5
*/

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int size =5;

    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            cout<<arr[j];
        }
        cout<<endl;
    }
    return 0;
}