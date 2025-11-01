#include<iostream>
using namespace std;
// This program prints a Traingle pattern of numbers like below for a given n:
// For n = 4
// A A A A
//   B B B
//     C C
//       D
// The pattern consists of n rows.
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    char ch='A';
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            cout << "  "; 
        }
        for(int k = 1; k <= n - i + 1; k++) {
            cout << ch << " ";
        }
        ch++;
        cout << endl;   
    }
    return 0;
}