#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Optimised sort then solve
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times.
// You may assume that the majority element always exists in the array.
// Example 1:Input: nums = [3,2,3] Output: 3
// Example 2: Input: nums = [2,2,1,1,1,2,2]Output: 2

int majorityElements(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    int freq = 1, ans = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }
        if (freq > nums.size() / 2)
            return ans;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 2, 2, 2, 2, 3, 1};
    cout << majorityElements(nums) << endl;
    return 0;
}