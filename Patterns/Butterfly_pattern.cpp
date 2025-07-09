#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Upper Half
    for (int i = 1; i <= n; i++) {
        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower Half
    for (int i = n; i >= 1; i--) {
        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
