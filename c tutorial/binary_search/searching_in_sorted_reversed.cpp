class Solution {

public:
    int getpivot(vector<int>& nums, int n) {
        int s = 0;
        int e = n - 1; 
        int mid;
        while (s < e) {
            mid = s + (e - s) / 2;
            if (nums[mid] >= nums[0]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        return s;
    }

    int search(vector<int>& nums, int st, int ed, int key) {
        int start = st;
        int end = ed;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == key) {
                return mid;
            }
            if (nums[mid] < key) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();    
        int pivot = getpivot(nums, n); 
        if (target >= nums[pivot] && target <= nums[n - 1]) {
            return search(nums, pivot, n - 1, target);
        } else {
            return search(nums, 0, pivot - 1, target);
            }
    }
};
int main(){


    return 0;
}