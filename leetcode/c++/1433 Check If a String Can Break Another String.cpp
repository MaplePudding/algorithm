class Solution
{
public:
    bool checkIfCanBreak(string s1, string s2)
    {
        vector<char> vs1;
        vector<char> vs2;
        for (int i = 0; i < s1.length(); ++i)
        {
            vs1.push_back(s1[i]);
        }
        sort(vs1.begin(), vs1.end());
        for (int i = 0; i < s2.length(); ++i)
        {
            vs2.push_back(s2[i]);
        }
        sort(vs2.begin(), vs2.end());
        for (int i = 0; i < vs1.size(); ++i)
        {
            if (vs1[i] != vs2[i])
            {
                if (vs1[i] > vs2[i])
                {
                    for (int index = i; index < vs1.size(); ++index)
                    {
                        if (vs1[index] < vs2[index])
                        {
                            return false;
                        }
                    }
                    return true;
                }
                else
                {
                    for (int index = i; index < vs1.size(); ++index)
                    {
                        if (vs1[index] > vs2[index])
                        {
                            return false;
                        }
                    }
                    return true;
                }
            }
        }
        return true;
    }
};