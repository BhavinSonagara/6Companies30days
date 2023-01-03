class Solution {

public:

    int BIT[60001];

    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int diff) {

        long long ans=0;

        for(int i=nums1.size()-1;i>=0;--i){

            nums1[i]-=nums2[i];

            for(int j=nums1[i]+30000;j<=60000;j+=j&-j)

                ans+=BIT[j];

            for(int j=nums1[i]+30000+diff;j;j-=j&-j)

                ++BIT[j];

        }

        return ans;

    }

};
        
    
