class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        for(int i=0;i<32;i++)
        {  int count =0;
            for(int j=0;j<n;j++ )
            {
               count += (nums[j]>>i)&1;


            }
            ans = ans + count *(n-count);
        }
        return ans ;
    }
};