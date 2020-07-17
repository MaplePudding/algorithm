class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i = sqrt(c); i >= 0; --i){
            if(i * i == c){
                return true;
            }
            else{
                int temp = sqrt(c - i * i);
                if(temp * temp == c - i * i){
                    return true;
                }
            }
        }
        return false;
    }
};