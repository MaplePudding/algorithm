class Solution {
public:
    static bool compare(vector<int>& point1, vector<int>& point2){
        if(point1[0] == point2[0]){
            return point1[1] > point2[1];
        }
        return point1[0] < point2[0];
    }
    
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size() == 0){
            return 0;
        }
        sort(points.begin(), points.end(), compare);
        int res = points.size();
        int index;
        
        for(int i = 0; i < points.size() - 1; ++i){
            int end = points[i][1];
            for(int x = i + 1; x < points.size(); ++x){
                if(end >= points[x][0]){
                    --res;
                    end = min(end, points[x][1]);
                }else{
                    i = x - 1;
                    break;
                }
                if(x == points.size() - 1){
                    return res;
                }
            }
        }
        return res;
    }
};