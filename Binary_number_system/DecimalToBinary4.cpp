//convert decimal to binary from 1 to n using array

#include<iostream>
using namespace std;

int decToBinary(int decNum){

    int arr[32];
    int index = 0;

    while(decNum>0){
        int rem = decNum%2;
        decNum = decNum/2;
        arr[index] = rem;
        index++;
    }

    for(int i=index-1;i>=0;i--){
        cout<<arr[i];
    }
}
int main(){

    int decNum;
    cout<<"enter decimal number:";
    cin>>decNum;

    for(int i=1;i<=decNum;i++){
        cout<<"binary number of "<<i<<" is: ";
        decToBinary(i);
        cout<<endl;
    }

    return 0;
}