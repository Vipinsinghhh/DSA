// How vectors works internally in the memory

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;

    vec.push_back(0);
    
    cout<<"size of vector: "<<vec.size();
    cout<<"capacity of vector: "<<vec.capacity()<<endl;

    vec.push_back(1);

    cout<<"size of vector: "<<vec.size();
    cout<<"capacity of vector: "<<vec.capacity()<<endl;

    vec.push_back(2);

     cout<<"size of vector: "<<vec.size();
    cout<<"capacity of vector: "<<vec.capacity()<<endl;

    vec.push_back(3);

     cout<<"size of vector: "<<vec.size();
    cout<<"capacity of vector: "<<vec.capacity()<<endl;

    vec.push_back(4);

     cout<<"size of vector: "<<vec.size();
    cout<<"capacity of vector: "<<vec.capacity()<<endl;

    return 0;


}