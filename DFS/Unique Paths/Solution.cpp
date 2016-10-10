// LeetCode, Unique Paths
// Time complexity O(n^2)
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> f(n, 0);
        f[0] = 1;
        for (int i = 0; i < m; i++) {
            for (int j = 1; j < n; j++) {
                f[j] = f[j - 1] + f[j];
            }
        }
        
        return f[n - 1];
    }
};