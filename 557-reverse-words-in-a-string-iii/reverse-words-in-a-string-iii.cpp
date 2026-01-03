class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        stringstream ss(s);

        string temp;
        char del = ' ';

        while (getline(ss, temp, del)) {
            words.push_back(temp);
        }

        int n = words.size();
        for (int i = 0; i < n; i++) {
            words[i] = string(words[i].rbegin(), words[i].rend());
        }

        string result = "";
        for (int i = 0; i < n; i++) {
            result += words[i];
            if (i != n - 1) result += " ";
        }

        return result;
    }
};
