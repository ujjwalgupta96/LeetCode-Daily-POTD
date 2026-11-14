class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = INT_MAX;

        for (int s = l; s <= r; s++) {
            int i = 0;
            int j = s - 1;

            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += nums[k];
            }

            if (sum > 0) {
                ans = min(sum, ans);
            }

            while (j < nums.size() - 1) {
                sum -= nums[i++];
                sum += nums[++j];
                if (sum > 0) {
                    ans = min(sum, ans);
                }
            }
        }
        return (ans == INT_MAX) ? -1 : ans;
    } 
};