//searching the target value is present on vector or not

#include<iostream>
#include<vector>
using namespace std;

int LinearSearch(vector<int>vec, int target){
    for(int val: vec){
        if(val == target){
            return val;
        }
    }
    return -1;
}

int main(){
    vector<int>vec = { 2,4,5,1,8,6,3,9};
    int size = sizeof(vec) / sizeof(vec[0]);

    int target;

    cout<<"Enter the target value you want to search in vector: ";
    cin>>target;

    if(LinearSearch(vec,target) == target){
        cout<<"yes target value is present"<<endl;
    }else if(LinearSearch(vec,target) == -1){
        cout<<"No target value is not present"<<endl;
    }

    return 0;
}