#include <iostream>
using namespace std;
// reverse a number
int reverseNumber(int num)
{
    int reversedNum = 0;
    while (num != 0)
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}
int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    int reversed = reverseNumber(number);
    cout << "Reversed Number: " << reversed << endl;
    return 0;
}