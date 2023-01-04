class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int end=-1;
        int max=nums[0];
        for(int i=1;i<nums.size();i++){
            if(max>nums[i]){
                end=i;
            }
            else{
                max=nums[i];
            }
        }
        int st=0;
        int min=nums[nums.size()-1];
        for(int j=nums.size()-2;j>=0;j--){
            if(nums[j]>min){
                st=j;
            }
            else{
                min=nums[j];
            }
        }
        return end-st+1;
    }
};
