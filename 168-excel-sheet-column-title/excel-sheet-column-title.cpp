class Solution {
public:
    string convertToTitle(int n) {
        string res = "";
        while (n > 0) {
            n--;
            res += char('A' + (n % 26));
            n /= 26;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
