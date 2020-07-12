class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int res = 0;
        int index1 = 0;
        int index2 = people.size() - 1;
        while(index1 <= index2){
            if(people[index1] + people[index2] <= limit){
                ++res;
                ++index1;
                --index2;
            }
            else{
                --index2;
                ++res;
            }
        }
        return res;    
    }
};