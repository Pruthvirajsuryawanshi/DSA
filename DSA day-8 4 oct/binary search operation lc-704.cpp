class Solution {
public:
    int searchNumber(vector<int>&nums, int target, int start, int end){
        int mid = (start+end)/2;
        if (start>end) return -1;
        if(nums[mid]==target) return mid;
        if(target>nums[mid]){
            return searchNumber(nums, target, mid+1, end);
        }
        if(target<nums[mid]){
            return searchNumber(nums, target, start, mid-1);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return searchNumber(nums, target, 0, nums.size()-1);
        return -1;
    }
};