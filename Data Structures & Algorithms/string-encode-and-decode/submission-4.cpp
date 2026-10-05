class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(int i=0;i<strs.size();i++){
            s+=strs[i];
            s+="~";
        }
        return s;
    }

    vector<string> decode(string s) {
        int n = s.length();
        string a;
        vector<string> decoded;
        for(int i=0;i<n;i++){
            if(s[i] == '~'){
                decoded.push_back(a);
                a.erase();
            }else{
                a+=s[i];
            }
        }
        return decoded;
    }
};
