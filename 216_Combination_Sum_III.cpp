//Combination Sum with a twist.
//https://leetcode.com/problems/combination-sum-iii/description/
class Solution {
public:
    
    void find_combi(vector<int> &ds,vector<vector<int> > &ans,int k,int n,int sum,int j){
        if(ds.size() > k){
            return;
        }
        if(ds.size() == k){
            if(sum == n){
                ans.push_back(ds);
            }
            return;
        }
        
        if(j>9){
            return;
        }
            ds.push_back(j);
            sum = sum + j;
            find_combi(ds,ans,k,n,sum,j+1);
            sum =sum - j;
            ds.pop_back();
            find_combi(ds,ans,k,n,sum,j+1);  
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ds;
        vector<vector<int> > ans;
        find_combi(ds,ans,k,n,0,1);
        return ans;
    }
};
