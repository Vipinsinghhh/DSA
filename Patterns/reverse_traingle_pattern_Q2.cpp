// print reverse traingle pattern
// A
// C B
// F E D
// J I H G
// O N M L K

#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    char ch = 'A';

    for (int i = 1; i <= rows; i++) {
        char line[i]; // Temporary array to store characters in this row

        // Fill current row characters in normal order
        for (int j = 0; j < i; j++) {
            line[j] = ch;
            ch++;
        }

        // Print in reverse order
        for (int j = i - 1; j >= 0; j--) {
            cout << line[j] << " ";
        }
        cout << endl;
    }

    return 0;
}

