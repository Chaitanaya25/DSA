class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        vector<int> sol;
        std::sort(nums.begin(), nums.end());

        int s = 0;
        int e = nums.size()-1;

        while (s < e ){

            int sum = nums[s] + nums[e];
            sol.push_back(sum);
            s++;
            e--;
        }

            int max_val = *std::max_element(sol.begin(), sol.end());
            return max_val;
    }
};