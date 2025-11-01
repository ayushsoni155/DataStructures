#include <iostream>
using namespace std;
// Function to get the sum of all elements in an array
int sumOfAllElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = sumOfAllElements(arr, size);
    cout << "Sum of all elements in the array: " << sum << endl;
    return 0;
}