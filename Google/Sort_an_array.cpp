class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {
        multiset<int> a;
        vector<int> ab;
        for (int i = 0; i < nums.size(); i++)
            a.insert(nums[i]);
        for (auto &str : a)
            ab.push_back(str);
        return ab;
    }
};