#include <iostream>

using namespace std;

int main() {
    int x, y;

    // Ask user to input two integers
    cout << "Enter the first integer (x): ";
    cin >> x;
    cout << "Enter the second integer (y): ";
    cin >> y;

    // Determine and print the relationship between x and y
    if (x == y) {
        cout << "x is equal to y." << endl;
    } else {
        cout << "x is not equal to y." << endl;
        if (x > y) {
            cout << "x is greater than y." << endl;
        } else {
            cout << "x is less than y." << endl;
        }
    }

    return 0;
}

