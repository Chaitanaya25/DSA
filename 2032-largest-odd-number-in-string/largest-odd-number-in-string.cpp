class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = (int)num.size() - 1; i >= 0; --i) {
            int d = num[i] - '0';
            if (d % 2 == 1) return num.substr(0, i + 1);
        }
        return "";
    }
};
