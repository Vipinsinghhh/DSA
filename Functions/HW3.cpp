#include<iostream>
using namespace std;

int fibN(int n){
    int fibNmin1 = 1;
    int fibNmin2 = 0;
    int sum =1;

    cout<<fibNmin2;
    cout<<" ";
    cout<<fibNmin1;
    cout<<" ";

    for (int i=2;i<n;i++){
        int fibN = fibNmin1 + fibNmin2;
        fibNmin2 = fibNmin1;
        fibNmin1 = fibN;
        cout<<fibN<<" ";
        sum+=fibN;
    }
    cout<<endl;
    return sum;
}
int main(){
    int n;
    cout<<"enter nth term of fibonacchi:";
    cin>>n;

    cout<<"sum of "<<n<<" fibonacci series is: "<<fibN(n)<<endl;
    return 0;
}