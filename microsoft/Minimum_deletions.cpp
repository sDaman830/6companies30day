class Solution
{
public:
    int minOperations(vector<int> &nums, vector<int> &numsD)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int m = numsD.size();
        int gcd_num = numsD[0];
        for (int i = 1; i < m; i++)
        {
            gcd_num = gcd(gcd_num, numsD[i]);
        }
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (gcd_num % nums[i])
                c++;
            else
                break;
        }

        return (c == n) ? -1 : c;
    }
};