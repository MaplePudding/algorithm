class Solution {
public:
    /**
     * longest common substring
     * @param str1 string×Ö·û´® the string
     * @param str2 string×Ö·û´® the string
     * @return string×Ö·û´®
     */
    string LCS(string str1, string str2) {
        // write code here
        int n = str1.size();
        int m = str2.size();
        int maxlen = 0;
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                if (str1[i] == str2[j])
                {
                    int k;//¹«¹²×Ó´®³¤¶È
                    for (k = 1; i + k < n && j + k < m; k++)
                    {
                        if (str1[i + k] != str2[j + k]) break;

                    }
                    if (k > maxlen) {
                        maxlen = k;
                        index = i;
                    }
                }
        }
        return str1.substr(index, maxlen);
    }
};