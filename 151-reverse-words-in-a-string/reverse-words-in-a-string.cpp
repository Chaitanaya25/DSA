class Solution {
public:
    string reverseWords(string s) {
        
        stringstream ss(s);
        vector<string> Akriti;

        string temp;

        while (ss >> temp) {   
            Akriti.push_back(temp);
        }

        string str = "";
        int n = Akriti.size();

        for (int i = n - 1; i >= 0; i--) {
            str += Akriti[i];
            if (i != 0) str += " ";
        }

        return str;
    }
};
