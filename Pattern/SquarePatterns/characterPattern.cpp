#include<iostream>
using namespace std;
// This program prints a square pattern of numbers like below for a given n:
// For n = 4
// A B C D
// A B C D
// A B C D
// A B C D
// The pattern consists of n rows and n columns.
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 1; i <=n; i++) {
        for(char j = 'A'; j < 'A'+ n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}