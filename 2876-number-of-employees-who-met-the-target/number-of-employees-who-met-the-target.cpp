class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;

        for (int c : hours){
            if (c>=target){
                count++;
            }
        }
        return count++;
    }
};