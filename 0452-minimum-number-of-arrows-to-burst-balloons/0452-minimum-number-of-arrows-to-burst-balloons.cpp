bool cmp(vector<int>& a, vector<int>& b) {return a[1] < b[1];}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), cmp);
        int ans=0, end;
        
        for(int i=0;i<points.size();i++){
            if(ans==0 || points[i][0]>end){
                ans++;
                end=points[i][1];
            }
        }
        
        return ans;
    }
};