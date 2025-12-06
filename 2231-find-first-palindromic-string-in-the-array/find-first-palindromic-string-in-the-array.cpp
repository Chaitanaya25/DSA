class Solution {
public:
    bool isPal(const string &s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for (auto &w : words) {
            if (isPal(w)) return w;
        }
        return "";
    }
};
