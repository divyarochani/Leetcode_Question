class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2)
        return true;

        int diff = 0;
        vector<int> v;
        for(int i = 0; i<s1.length();i++)
        {
            if(s1[i] != s2[i])
            {
                diff++;
                v.push_back(i);
            }
        }
        if(diff != 2)
        {
            return false;
        }
        swap(s1[v[0]], s1[v[1]]);
        if(s1 == s2)
        return true;

        return false;
    }
};












