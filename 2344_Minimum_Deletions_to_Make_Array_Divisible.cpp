class Solution {
public:
    int gcd(int a,int b){
        return (b == 0) ? a : gcd(b,a%b);
    }
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int n = nums.size();
        int hcf = numsDivide[0];
        for(int i=1;i<numsDivide.size();i++){
            hcf = gcd(hcf,numsDivide[i]);
        }
        cout << hcf << " ";
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int count = 0;
        for(auto it : mp){
            cout << it.second << " ";
            if(hcf % it.first != 0){
                count += it.second;
            }
            else{
                break;
            }
        }
        //cout << count << " ";
        if(count == nums.size()) return -1;
        return count;
    }
};
