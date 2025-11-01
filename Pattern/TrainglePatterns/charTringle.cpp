#include<iostream>
using namespace std;
// This program prints a Traingle pattern of numbers like below for a given n:
// For n = 4
// A
// B B
// C C C
// D D D D
// The pattern consists of n rows.
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    char ch = 'A';
    for(int i=1; i <= n; i++) {
        for(int j=1; j<=i; j++) {
            cout << ch << " ";
        }
        ch++;        
        cout << endl;  
    }
    return 0;
}