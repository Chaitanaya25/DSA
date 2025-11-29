class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) return intersect(nums2, nums1);
        
        unordered_map<int, int> freq;
        vector<int> result;

        for (int x : nums1) freq[x]++;

        for (int x : nums2) {
            if (freq[x] > 0) {
                result.push_back(x);
                freq[x]--;
            }
        }

        return result;
    }
};
