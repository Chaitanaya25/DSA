class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int sum = 0;
        int res = INT_MAX;

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            while (sum >= target) {
                res = min(res, i - low + 1);
                sum -= nums[low];
                low++;
            }
        }

        if (res == INT_MAX) {
            return 0;
            }
        return res;
    }
};