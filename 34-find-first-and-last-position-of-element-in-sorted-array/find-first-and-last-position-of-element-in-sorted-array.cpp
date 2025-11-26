class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> temp;
        vector<int> res;

         for (int i=0;i<nums.size();i++){
            if (nums[i]==target){
                temp.push_back(i);
            } 
         }
         if (temp.empty()) {
            temp.push_back(-1);
            temp.push_back(-1);
}
            int top = temp[0];
            res.push_back(top);
            int last = temp.back();
            res.push_back(last);

            return res;

    }
};