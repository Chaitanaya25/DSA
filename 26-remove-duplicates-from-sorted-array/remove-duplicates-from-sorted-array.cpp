class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int dup = 1; 
        int of=0;
        int cm=1;

        while (cm < nums.size()){
            if(nums[cm]!=nums[of]){
                nums[of+1] = nums[cm];
                cm++;
                of++;
                dup++;
            }
            else {
                cm++;
            }
        }
        return dup;
    }
};