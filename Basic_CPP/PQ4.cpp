//Give a persons age , find if they should get a driving license or not

#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;

    cout<<"enter the person's age:";
    cin>>age;

    if(age>=18){
        cout<<"eligible for driving license";
    }else{
        cout<<"not eligible for driving license";
    }
    return 0;
}
