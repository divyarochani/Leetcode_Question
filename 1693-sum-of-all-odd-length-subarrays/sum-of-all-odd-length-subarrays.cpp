class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0, num=arr.size(),i;
        for(i = 0; i<num;i++){
            int x = ceil((i+1)*(num-i)/2.0);
            ans+=(x*arr[i]);
        }
        return ans;
    }
};