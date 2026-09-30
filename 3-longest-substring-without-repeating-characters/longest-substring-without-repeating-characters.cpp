class Solution {
public:
    int lengthOfLongestSubstring(string s) {

            unordered_map<char,int> f;
            int n = s.size();
            int low = 0;
            int res = 0;

            for(int i = 0; i<n ; i++){

                    f[s[i]]++;

                    int k = i-low+1;
                    while (f.size()<k){
                        f[s[low]]--;

                        if( f[s[low]]==0){
                            f.erase(s[low]);
                        }
                        low++;
                        k = i-low+1;
                    }
                    res = max(res,i-low+1);
            }
                    return res;
    }
};