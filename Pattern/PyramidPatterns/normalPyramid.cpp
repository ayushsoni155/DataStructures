#include <iostream>
using namespace std;
// This program prints a Pyramid pattern of numbers like below for a given n:
// For n = 4
//       1
//     1 2 1
//   1 2 3 2 3
// 1 2 3 4 3 2 1
// The pattern consists of n rows.
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << k + 1 << " ";
        }
        for (int l = i; l >=1; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
    return 0;
}