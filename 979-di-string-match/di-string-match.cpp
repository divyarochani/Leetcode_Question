class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> inc;
        vector<int> dec;
        vector<int> result;

        for(int i=0;i<=s.length();i++){
            inc.push_back(i);
            dec.push_back(s.length()-i);
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='I'){
                result.push_back(dec[dec.size()-1]);
                dec.pop_back();
            }
            else{
                result.push_back(inc[inc.size()-1]);
                inc.pop_back();
            }
        }
        if(s[s.size()-1]=='D'){
            result.push_back(inc[inc.size()-1]);
        }
        else{
            result.push_back(dec[dec.size()-1]);
        }
        return result;
    }
};