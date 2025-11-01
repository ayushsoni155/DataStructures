#include<iostream>
using namespace std;
// This program prints a Traingle pattern of numbers like below for a given n:
// For n = 4
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// The pattern consists of n rows.
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=1; i <= n; i++) {
        for(int j=1; j<=i; j++) {
            cout << j << " ";
        }        cout << endl;  
    }
    return 0;
}