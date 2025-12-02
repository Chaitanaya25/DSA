class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int n = nums.size();
        if (n == 0) return res;

        long long start = nums[0];
        long long prev = nums[0];

        for (int i = 1; i < n; ++i) {
            if ((long long)nums[i] == prev + 1) {
                prev = nums[i];
            } else {
                if (start == prev) res.push_back(to_string(start));
                else res.push_back(to_string(start) + "->" + to_string(prev));
                start = prev = nums[i];
            }
        }

        if (start == prev) res.push_back(to_string(start));
        else res.push_back(to_string(start) + "->" + to_string(prev));

        return res;
    }
};
