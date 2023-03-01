class Solution
{
public:
    int findMaximizedCapital(int k, int w, vector<int> &profits, vector<int> &capital)
    {

        int i = 0;

        int n = profits.size();
        vector<pair<int, int>> p(n);

        for (int i = 0; i < n; i++)
        {

            p[i] = {capital[i], profits[i]};
        }
        sort(p.begin(), p.end());

        priority_queue<int> m;
        while (k--)
        {

            while (i < n && p[i].first <= w)
            {
                m.push(p[i].second);
                i++;
            }
            if (m.empty())
                break;
            w += m.top();
            m.pop();
        }
        return w;
    }
};