#include <iostream>
#include <vector>
using namespace std;
// Brute Force Approach
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times.
// You may assume that the majority element always exists in the array.
// Example 1:Input: nums = [3,2,3] Output: 3
// Example 2: Input: nums = [2,2,1,1,1,2,2]Output: 2

int majorityElements(vector<int> nums)
{
    for(int val : nums)
    {
        int freq=0;
        for(int ele : nums)
        {
            if(ele==val)
            freq++;
        }
        if(freq>nums.size()/2) return val;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 2, 2, 2, 2, 3, 1};
    cout<< majorityElements(nums)<<endl;
    return 0;
}