class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        vector<int> v(ratings.size(), 1);
        for (int i = 1; i < ratings.size(); ++i)
        {
            if (ratings[i] > ratings[i - 1])
            {
                v[i] = v[i - 1] + 1;
            }
        }
        for (int i = ratings.size() - 1; i > 0; --i)
        {
            if (ratings[i] < ratings[i - 1])
            {
                v[i - 1] = max(v[i - 1], v[i] + 1);
            }
        }
        return accumulate(v.begin(), v.end(), 0);
    }
};