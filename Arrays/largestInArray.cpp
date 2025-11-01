#include <iostream>
#include <climits>
using namespace std;
// Function to find the Largest element in an array
int findLargest(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main()
{
    int arr[5] = {5, 1, 9, 6, 7};
    int size = 5;
    cout << "Largest number in array is " << findLargest(arr, size) << endl;
    return 0;
}