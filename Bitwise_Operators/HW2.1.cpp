// write a function to reverse an integer n with last zero digits

#include <iostream>
#include <algorithm>
using namespace std;

string reverseIntWithZeros(int n) {
    string s = to_string(n);   // number → string
    reverse(s.begin(), s.end()); // reverse string
    return s;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "Reversed: " << reverseIntWithZeros(n) << endl;
    return 0;
}
