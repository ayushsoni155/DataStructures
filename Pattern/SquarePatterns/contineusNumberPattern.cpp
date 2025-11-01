#include<iostream>
using namespace std;
// This program prints a square pattern of numbers like below for a given n:
// For n = 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// The pattern consists of n rows and n columns.
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 1;
    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}