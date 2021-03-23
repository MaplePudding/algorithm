class Solution {
public:
    /**
     * ·´×ª×Ö·û´®
     * @param str string×Ö·û´®
     * @return string×Ö·û´®
     */
    string solve(string str) {
        // write code here
        int i = 0;
        char temp;
        if (str.size() <= 1)
            return str;
        int n = str.size();
        for (int j = n - 1; i <= j; i++, j--)
            swap(str[i], str[j]);
        return str;
    }
};