class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> char_count;

        for(char ch: s){
            char_count[ch]++;
        }

        for(int i = 0; i<s.length();i++){
            if(char_count[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};