class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1="";
        string t1="";
        for(int i=0; i<s.size(); i++){
            if( s[i] == '#'){
                if(s1.size()!=0){
                    s1.pop_back();
                }
                continue;
            }
            else{
                s1.push_back(s[i]);
            }
        }

        for(int i=0; i<t.size(); i++){
            if( t[i] == '#'){
                if(t1.size()!=0){
                    t1.pop_back();
                }
                continue;
            }
            else{
                t1.push_back(t[i]);
            }
        }
        cout << "s1:- "<<s1 << " t1:-" << t1 << endl; 
        return s1 == t1;
    }
};