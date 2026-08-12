class Solution {
public:
    string toBase(int n, int base) {
        if (n == 0) return "0";
        string result = "";
        while (n > 0) {
            int remainder = n % base;
            result += to_string(remainder);
            n /= base;
        }
        reverse(result.begin(), result.end());
        return result;
    }

    bool isStrictlyPalindromic(int n) {
        for (int i = 2; i <= n - 2; i++) {
            string rep = toBase(n, i);

            int left = 0;
            int right = rep.size() - 1;

            while (left < right) {
                if (rep[left] != rep[right]) {   
                    return false;
                }
                left++;      
                right--;
            }
        }

        return true;
    }
};