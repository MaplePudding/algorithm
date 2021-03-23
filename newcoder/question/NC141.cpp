class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * @param str string字符串 待判断的字符串
     * @return bool布尔型
     */
    bool judge(string str) {
        // write code here
        if (str.length() == 0)
            return false;
        if (str.length() == 1)
            return true;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] != str[str.length() - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};