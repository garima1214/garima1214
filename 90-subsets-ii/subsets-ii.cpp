class Solution {
public:

void solve ( vector<int>& nums ,vector<int>& temp, vector<vector<int>> &result,int i,bool prev )
{
    if(i==nums.size())
    {
        result.push_back(temp);
    }
  else
    {//ith ignore
    solve (nums,temp,result,i+1,false);
    if(i>0 && (nums[i-1]==nums[i])&& (!prev))
    return ;
    //take ith
    temp.push_back(nums[i]);
    solve(nums,temp,result,i+1,true);
    temp.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<int> temp;
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        solve (nums,temp,result,0,false);
        return result;
    }
};