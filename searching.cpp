// linear search O(n)
// binary search O(logn)

#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
    public:
        int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
    
        while (left <= right) {
            int mid = left + (right - left) / 2; 
    
            if (nums[mid] == target)
                return mid; 
            else if (nums[mid] < target)
                left = mid + 1; 
            else
                right = mid - 1; 
        }
    
        return -1;
            
        }
    };
    int main(){
        Solution s1;
        vector<int>nums;
        nums={1,4,6,8,9,14,15,16,18};
        cout<<" target is at index "<<s1.search(nums,16);

    }