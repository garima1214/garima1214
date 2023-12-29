class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        nums[i]+=nums[i-1];
        for(int j=0;j<q.size();j++)
        {
            q[j]=upper_bound(nums.begin(),nums.end(),q[j])-nums.begin();
        }
        return q;
    }
};