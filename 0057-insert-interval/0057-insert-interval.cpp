class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size(), idx = 0;
        vector<vector<int>> ans;

        while(idx < n && intervals[idx][1] < newInterval[0]){
            ans.push_back(intervals[idx]);
            idx++;
        }                           
        
        while(idx < n && newInterval[1] >= intervals[idx][0]){
            newInterval[0] = min(newInterval[0], intervals[idx][0]);
            newInterval[1] = max(newInterval[1], intervals[idx][1]);
            idx++;
        }
        
        ans.push_back(newInterval);
        
        while(idx < n){
            ans.push_back(intervals[idx]);
            idx++;
        }
        return ans;
    }
};