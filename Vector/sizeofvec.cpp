#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    cout << "Enter elements: ";
    for(int i=0; i<10; i++){      //In the empty vector you did not insert elements directly you want to store a element in variable then push that variable value into vector.
        int x;
        cin >> x;
        vec.push_back(x); // add element at the end
    }

    int size = vec.size();   //size retriving function
    cout << "Size = " << size;    

    return 0;
}
