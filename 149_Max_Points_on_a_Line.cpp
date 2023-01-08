class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 1;
        for(int i = 0; i < n-1; i++){
            map<double,int> mp;
            for(int j = i + 1; j < n; j++){
                if(points[i][0] == points[j][0]){
                    mp[INT_MIN]++;
                }
                else{
                    double d = (double)(points[j][1] - points[i][1]) / (double)(points[j][0] - points[i][0]);
                    mp[d]++;
                }
            }
            int curr_max = 0;
            for(auto it : mp){
                curr_max = max(curr_max, it.second + 1);
            }
            ans = max(ans, curr_max);
        }
        return ans;
    }
};
