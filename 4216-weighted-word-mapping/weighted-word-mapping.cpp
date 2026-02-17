class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        vector<char> reverseA(26);
        char ch = 'z';
        for (int i = 0; i < 26; i++) {
            reverseA[i] = ch;
            ch--;
        }

        string result = "";

        for (int i = 0; i < words.size(); i++) {
            int totalW = 0;

        for (int j = 0; j < words[i].size(); j++) {
                char currentChar = words[i][j];

                int index = 0;
         for (char c = 'a'; c <= 'z'; c++) {
                    if (c == currentChar) {
                        break;
                    }
                    index++;
                }

                totalW += weights[index];
            }

            int remainder = totalW % 26;
            result += reverseA[remainder];
        }

        return result;
    }
};