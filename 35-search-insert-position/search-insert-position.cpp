class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1; // Initialize start and end

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] < target) {
                start = mid + 1;
            } else { // This handles both cases: nums[mid] == target and nums[mid] > target
                end = mid - 1;
            }
        }
        return start; // 'start' will be at the correct insertion index
    }
};