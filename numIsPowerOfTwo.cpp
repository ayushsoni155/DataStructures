#include <iostream>
using namespace std;
// Function to check if a number is a power of two with out using loops or recursion
bool isPowerOfTwo(int n) {
    // A number is a power of two if it is greater than 0 and
    // the bitwise AND of the number and one less than the number is zero
    return (n > 0) && ((n & (n - 1)) == 0);
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPowerOfTwo(number)) {
        cout << number << " is a power of two." << endl;
    } else {
        cout << number << " is not a power of two." << endl;
    }

    return 0;
}