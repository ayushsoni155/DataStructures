#include<iostream>
#include<vector>
using namespace std;
// Brute Force Approach
// function to find pairs in an array that sum up to a target value
// returns a vector containing the pairs
// Example: nums = {2, 7, 11, 15}, target = 9 -> returns {2, 7}
// Example: nums = {1, 2, 3, 4, 5}, target = 8 -> returns {3, 5}

vector <int> pairSum(vector<int> nums, int target)
{
    vector <int> ans;
    for(int i=0; i<nums.size();i++)
    {
        for(int j=i+1; j<nums.size();j++)
        {
            if(nums[i] + nums[j] == target)
            {
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 8;
    vector<int> result = pairSum(nums, target);

    for (int i = 0; i < result.size(); i += 2) {
        cout << "Pair found: (" << result[i] << ", " << result[i + 1] << ")\n";
    }

    return 0;
}