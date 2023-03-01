class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        if (nums.size() < 3)
            return false;
        int l = INT_MAX;
        int mid = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > mid)
                return true;
            else if (nums[i] > l && nums[i] < mid)
                mid = nums[i];
            else if (nums[i] < l)
                l = nums[i];
        }
        return false;
    }
};