#include <iostream>
#include <climits>
using namespace std;
// Function to find the smallest element in an array
int findSmallest(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
int main()
{
    int arr[5] = {0, 1, 9, 6, -1};
    int size = 5;
    cout << "Smallest number in array is " << findSmallest(arr, size) << endl;
    return 0;
}