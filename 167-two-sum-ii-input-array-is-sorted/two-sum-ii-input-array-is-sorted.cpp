class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int strt = 0;
        int end = numbers.size() - 1;

        while (strt < end) {

            int sum = numbers[strt] + numbers[end];

            if (sum == target) {
                return {strt + 1, end + 1};
            }

            else if (sum > target) {
                end--;
            }

            else {
                strt++;
            }
        }

        return {};
    }
};