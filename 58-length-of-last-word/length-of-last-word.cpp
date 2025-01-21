class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        bool xyz = false;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' ' && xyz == true){
                break;
            }
            else if(s[i]!= ' '){
                xyz=true;
                ans++;
            }
        }
        return ans;
    }
};