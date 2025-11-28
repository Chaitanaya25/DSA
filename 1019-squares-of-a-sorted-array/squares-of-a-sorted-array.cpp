class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

         int temp;
        for (int i =0;i<nums.size();i++){
            temp = nums[i]*nums[i];
            nums[i]=temp;
        }
         for (int i=0;i<nums.size()-1;++i) {
        
        for (int j=0;j<nums.size()-i-1;++j) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
        
    }
    return nums;
  }
};