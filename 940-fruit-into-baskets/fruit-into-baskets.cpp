class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> f;   
        int low = 0;
        int n = fruits.size();
        int res = 0;

        for (int i = 0; i < n; i++) {
            f[fruits[i]]++;

            while (f.size() > 2) {          
                f[fruits[low]]--;
                if (f[fruits[low]] == 0) {
                    f.erase(fruits[low]);
                }
                low++;
            }

            res = max(res, i - low + 1);    
        }

        return res;
    }
};