class Solution {
public:
    int getdistance(vector<int> &a, vector<int> &b){
        return (b[0] - a[0]) * (b[0] - a[0]) + (b[1] - a[1]) * (b[1] - a[1]) ;
    }
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            map<int,int> mp;
            for(int j = 0; j < n ; j++){
                mp[getdistance(points[i],points[j])]++;
            }
            for(auto it : mp){
                //cout << it.second << " ";
                ans += (it.second) * (it.second - 1);
            }
        }
        return ans;
    }
};
