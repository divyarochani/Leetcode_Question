class Solution {
public:
    double max(double a, double b){ return a > b ? a : b; }
    double findMaxAverage(vector<int>& a, int k) {
        double ans = 0;
        int n = a.size();
        int sum = 0;
        for(int i = 0; i < k; i++) sum += a[i];
        ans = (double)sum / k;
        for(int i = 1; i < n-k+1; i++){
            sum += a[i+k-1];
            sum -= a[i-1];
            ans = max(ans, (double)sum/k);
        }
        return ans;
    }
};