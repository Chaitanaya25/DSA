class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> seen(26, false);
        for(char c : sentence) seen[c - 'a'] = true;
        for(bool x : seen) if(!x) return false;
        return true;
    }
};
