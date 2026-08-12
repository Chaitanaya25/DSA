class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> ans(n, pivot);

        int j = n - 1;
        int left = 0, right = n - 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] < pivot) ans[left++] = nums[i];
            if (nums[j] > pivot) ans[right--] = nums[j];
            j--;
        }

        return ans;
    }
};