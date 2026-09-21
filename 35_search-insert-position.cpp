// easy
// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2

// Example 2:
// Input: nums = [1,3,5,6], target = 2
// Output: 1

// Example 3:
// Input: nums = [1,3,5,6], target = 7
// Output: 4

// Constraints:

// - 1 <= nums.length <= 104
// - -104 <= nums[i] <= 104
// - nums contains distinct values sorted in ascending order.
// - -104 <= target <= 104

// O(log n) runtime complexity -> binary search
// Search Insert Position = 找第一個 >= target 的位置 = lower bound = left

#include <iostream>
using namespace std;

int binary_search(vector <int> input, int target){
    int left  = 0;
    int right = input.size() - 1;
    
    while (left <= right){
        int mid = left + (right - left) / 2;

        if (input[mid] == target){
            return mid;
        }
        else if (input[mid] < target){
            left  = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    return left;
}

int main(){
    cout << binary_search({1, 3, 5, 6}, 2) << "\n";
    return 0;
}

