#include <iostream>
using namespace std;
// Function to get the product of all elements in an array
int productOfAllElements(int arr[], int size) {
    int pro = 1;
    for (int i = 0; i < size; i++) {
        pro *= arr[i];
    }
    return pro;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pro = productOfAllElements(arr, size);
    cout << "product of all elements in the array: " << pro << endl;
    return 0;
}