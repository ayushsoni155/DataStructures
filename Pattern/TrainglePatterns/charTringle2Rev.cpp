#include<iostream>
using namespace std;
// This program prints a Traingle pattern of numbers like below for a given n:
// For n = 4
// A
// B A
// C B A
// D C B A
// The pattern consists of n rows.
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=0; i < n; i++) {
        for(char j='A'+i; j>='A'; j--) {
            cout << j << " ";
        }        cout << endl;  
    }
    return 0;
}