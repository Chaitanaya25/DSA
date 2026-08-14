class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int counter = 0;
        for (int i = 0; i < nums.size(); i++){
            if ((find(nums.begin(), nums.end(), nums[i] + diff) != nums.end()) &&
                (find(nums.begin(), nums.end(), nums[i] + (2*diff))!= nums.end())){
                    counter ++;
                }
         }
        return counter;
    }
};