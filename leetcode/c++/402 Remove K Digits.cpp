class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        string str;
        if (num.size() <= k)
        {
            return "0";
        }
        for (int i = 0; i < num.size();)
        {
            if (str.size() == 0)
            {
                if (num[i] != '0')
                {
                    str.push_back(num[i]);
                }
                ++i;
            }
            else if (str.back() > num[i] && k)
            {
                str.pop_back();
                --k;
            }
            else
            {
                str.push_back(num[i]);
                ++i;
            }
        }
        for (int i = 0; i < k; ++i)
        {
            str.pop_back();
        }
        if (str.size() == 0)
        {
            return "0";
        }
        return str;
    }
};