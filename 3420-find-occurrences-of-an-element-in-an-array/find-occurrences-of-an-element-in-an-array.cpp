class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {

        vector<int> positions;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x) {
                positions.push_back(i);
            }
        }
        
        vector<int> result;
        for (int q : queries) {
            if (q <= positions.size()) {
                result.push_back(positions[q - 1]);  
            } else {
                result.push_back(-1);
            }
        }
        
        return result;
    }
};