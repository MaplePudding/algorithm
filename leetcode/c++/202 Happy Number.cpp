class Solution {
public:
    bool isHappy(int n) {
        int k = n, sum=0;
        unordered_map<int, bool> pres;
        for(;;) {
            while(k) {
                sum += (k%10) * (k%10);
                k=k/10;
            }
            if(sum == 1) {
                return true;
            } else {
                if(pres[sum]) {
                    return false;
                } else {
                    pres[sum] = true;
                    k=sum;
                    sum=0;
                }
            }
        }
        return false;
    }
};