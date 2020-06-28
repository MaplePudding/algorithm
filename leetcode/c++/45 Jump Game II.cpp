class Solution
{
public:
    int jump(vector<int> &nums)
    {

        int cnt = 0;
        int curtarget = 0;
        int nexttarget = 0;

        if (nums.size() == 1)
            return 0;

        for (int i = 0; i < nums.size(); i++)
        {
            nexttarget = max(nexttarget, i + nums[i]);

            if (i == curtarget || nexttarget >= nums.size() - 1)
            {
                cnt++;

                curtarget = nexttarget;
            }

            if (nexttarget >= nums.size() - 1)
                return cnt;
        }

        return cnt;
    }
};