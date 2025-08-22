#include<iostream>
using namespace std;

int reverseInt(int n){
    int arr[20];
    int index =0;

    while(n > 0){
        arr[index] = n % 10;
        n /= 10;
        index++;
    }

    cout<<"reversed integer is: ";
    
    for(int i=0;i<index;i++){
        cout<<arr[i];
    }
}
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;

    reverseInt(n);

    return 0;
}