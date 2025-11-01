#include <iostream>
#include <climits>
using namespace std;
// Function to find the smallest element in an array
int findSmallest(int arr[], int size) {
    int min = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
// Function to find the largest element in an array
int findLargest(int arr[], int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
// Function to swap the smallest and largest elements in an array
void swapMinMax(int arr[], int size) {
    int min = findSmallest(arr, size);
    int max = findLargest(arr, size);
    for(int i = 0; i < size; i++) {
        if (arr[i] == min) {
            arr[i] = max;
        } else if (arr[i] == max) {
            arr[i] = min;
        }
    }
}
// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {3, 5, 1, 1, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, size);
    swapMinMax(arr, size);
    cout << "Array after swapping min and max: ";
    printArray(arr, size);
    return 0;
}