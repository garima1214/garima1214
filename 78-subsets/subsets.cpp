class Solution {
public:

void solve(vector<int>& nums,vector<vector<int>> &ans,int i, vector<int>&temp)
{
    if(i==nums.size())
     {
         ans.push_back(temp);
     }
     else
     {
         temp.push_back(nums[i]);
         solve(nums,ans,i+1,temp);

         temp.pop_back();
         solve(nums,ans,i+1,temp);

     }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans ;
        vector<int>temp;
        solve(nums,ans,0,temp);
        return ans;
    }
};