class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 求出a、b的最大公约数。
     * @param a int
     * @param b int
     * @return int
     */
    int gcd(int a, int b) {
        // write code here        while(a != b){
        while (a != b) {
            if (a > b) a -= b;
            else b -= a;
        }
        return a;
    }
};