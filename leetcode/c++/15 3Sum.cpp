class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        vector<vector<int> > ret;
        vector<int > vtemp;
        int len = nums.size();
        sort(nums.begin(),nums.end());//sort the input
        for(int i=0;i<len-2;i++){
            //find the tripe for each nums[i]
            // j1 and j2 log the index of the other two numbers
            if(i ==0 ||(i>0 && nums[i] != nums[i-1])){
                int p1 = i+1, p2 = len-1; // set two pointers
                while(p1 < p2){
                    if(nums[p1] + nums[p2] < -nums[i]){
                        p1++;
                    }else if(nums[p1] + nums[p2] == -nums[i]){
                        if(p1 == i+1){
                            vector<int > vtemp{nums[i], nums[p1], nums[p2]};
                            ret.push_back(vtemp);
                            vtemp.clear();

                        }else if(nums[p1] != nums[p1-1]){
                            vector<int > vtemp{nums[i], nums[p1], nums[p2]};
                            ret.push_back(vtemp);
                            vtemp.clear();

                        }
                        p1++,p2--;
                    }else{
                         p2--;
                    }
                }
            }


        }
        return ret;

    }
};