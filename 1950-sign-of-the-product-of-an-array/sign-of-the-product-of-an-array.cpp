class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negativeCount = 0;

        for (int c : nums) {
            if (c == 0) return 0; 
            if (c < 0) negativeCount++;
        }

          if (negativeCount % 2 == 0) return 1;
        return -1;
    }
};
