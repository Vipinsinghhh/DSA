//reverse an vector using function

#include<iostream>
#include<vector>
using namespace std;

int reverseVec(vector<int>&vec, int size){
    int start = 0;
    int end = size-1;

    while(start<end){
        swap(vec[start], vec[end]);
        start++, end-- ;
    }
}
int main(){
    vector<int>vec = {1,2,3,4,5};
    int size = vec.size();

    reverseVec(vec,size);

    for(int i=0;i<size;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}