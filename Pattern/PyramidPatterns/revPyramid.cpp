#include <iostream>
using namespace std;
// This program prints a Pyramid pattern of numbers like below for a given n:
// For n = 4
// 1 2 3 4 3 2 1
//   1 2 3 2 1
//     1 2 1
//       1
// The pattern consists of n rows.
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= n-i; k++)
        {
            cout << k << " ";
        }
        for (int l = n-i-1; l>0; l--)
        {
            cout << l << " ";
        }
        
        cout << endl;
    }
    return 0;
}