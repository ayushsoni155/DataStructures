#include<iostream>
using namespace std;
// This program prints a Traingle pattern of numbers like below for a given n:
// For n = 4
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// The pattern consists of n rows.
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=1; i <= n; i++) {
        for(int j=i; j>=1; j--) {
            cout << j << " ";
        }        cout << endl;  
    }
    return 0;
}