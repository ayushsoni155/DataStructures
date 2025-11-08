#include <iostream>
#include <vector>
using namespace std;
// Function to perform binary search on a sorted array
// Returns the index of the target if found, otherwise returns -1
// Time Complexity: O(log n)
// with recursion
class Solution
{
public:
   int binarySearch(vector<int> &arr, int target, int st, int en)
   {
      if (st > en)
         return -1;
      int mid = st + (en - st) / 2;
      if (arr[mid] == target)
         return mid;
      else if (target < arr[mid])
         return binarySearch(arr, target, st, mid - 1);
      else
         return binarySearch(arr, target, mid + 1, en);
   }
};
int main()
{
   Solution sol;
   vector<int> arr = {1, 2, 3, 5, 12, 48, 98, 56};
   int target = 12;
   cout << sol.binarySearch(arr, target, 0, arr.size() - 1) << endl;
   return 0;
}
