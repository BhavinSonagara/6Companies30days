class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        map<int,int> mp;
        int n = cards.size();
        //vector<int> v;
        int ans = INT_MAX;
        for(int i = 0; i < n; i++){
            if(mp.find(cards[i]) != mp.end()){
                // v.push_back(i - mp[cards[i]] + 1);
                if((i - mp[cards[i]] + 1) <= ans){
                    ans = (i - mp[cards[i]] + 1);
                }
            }
            mp[cards[i]] = i;
        }
        return (ans == INT_MAX) ? -1 : ans;
    }
};
