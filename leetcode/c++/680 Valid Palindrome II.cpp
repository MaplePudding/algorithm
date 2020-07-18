class Solution {
public:
    bool switchDir(int index1, int index2, string s){
        while(index1 <= index2){
            if(index1 == index2){
                return true;
            }
            if(s[index1] == s[index2]){
                ++index1;
                --index2;
            }
            else{
                return false;
            }
        }
            return true;
    };
    
    
    bool validPalindrome(string s) {
        int index1 = 0;
        int index2 = s.length() - 1;
        int flag = 1;
        bool temp1 = true;
        bool temp2 = true;
        
        while(index1 <= index2){
            if(index1 == index2){
                return true;
            }
            if(s[index1] == s[index2]){
                ++index1;
                --index2;
            }else{
                --flag;
                int i1 = index1;
                int i2 = index2;
                int i3 = index1;
                int i4 = index2;
                temp1 = switchDir(++i1, i2, s);
                temp2 = switchDir(i3, --i4, s);
                break;
            }
        }
        return temp1 || temp2;
    }
};