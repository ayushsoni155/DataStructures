#include <iostream>
#include<vector>
using namespace std;
// Function to perform binary search on a sorted array
// Returns the index of the target if found, otherwise returns -1
// Time Complexity: O(log n)
// without recursion
class Solution
{
public:
   int binarySearch(vector<int> arr, int target)
   {
      int st=0;
      int en=arr.size()-1;

      while (st<=en)
      {
      // int mid = (st + en)/2;
        int mid = st + (en - st)/2;
        if( arr[mid]==target) return mid;
        else if(target < arr[mid])
        {
            en=mid-1;
        }
        else st=mid+1;
      }
      return -1;
   }
};
int main()
{
    Solution sol;
    vector<int>arr={ 1, 2, 3, 5 ,12 , 48 ,98 ,56};
    int target = 12;
    cout << sol.binarySearch(arr,target) << endl;
    return 0;
}
