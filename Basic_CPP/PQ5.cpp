//find character is lowercase or uppercase

#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;

    cout<<"enter the character:";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"given character is lowercase character";
    }else if(ch>='A'&&ch<='Z'){
        cout<<"given character is uppercase character";
    }else{
        cout<<"enter a valid character";
    }
    return 0;
    
}