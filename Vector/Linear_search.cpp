//searching the index of target value stored in vector using Linear search alogorithm

#include<iostream>
#include<vector>
using namespace std;

void LinearSerach(vector<int>vec, int size, int target){

    for(int i=0;i<size;i++){
        if(vec[i] == target){
            cout<<"Index value of target is: "<<i;
            return;
        }
    }
    cout<<"Target value is not present in vector";
}

int main(){

    vector<int>vec = {2,4,5,1,8,6,3,9};
    int size = vec.size();

    int target;

    cout<<"Enter the target value whose index you want to know: ";
    cin>>target;

    LinearSerach(vec,size,target);

    return 0;
}