class Solution {
public:
    int binarySearch(vector<int>& nums, int start, int end, int target){
        while( start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] > target) {
                end = mid - 1;
            }
            else if(nums[mid] < target) {
                start = mid + 1;
            }
        }
        return -1;
    }



    int getPivot(vector<int>& nums, int size) {
        int start = 0; 
        int end = size - 1;
        while(start < end) {
            int mid = start + (end - start) / 2;
            if(nums[mid] >= nums[0]) {
                start = mid + 1;
            }
            else {
                end = mid;
            }
        }
        return start;
    }


    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getPivot(nums, n);
        if(target >= nums[pivot] && target <= nums[n - 1]) {
            return binarySearch(nums, pivot, n - 1, target);
        }
        else {
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};