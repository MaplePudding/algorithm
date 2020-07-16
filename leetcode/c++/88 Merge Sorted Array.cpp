class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int len1 = nums1.size(), i, j = 0, count = 0;
        for (i = 0; i < len1; i++)
        {

            if (nums1[i] == 0 && count < n)
            {

                nums1[i] = nums2[j];
                j++;
                count++;
            }
        }
        sort(nums1.begin(), nums1.end());
    }
};