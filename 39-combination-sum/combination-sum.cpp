class Solution {
public:
vector<vector<int>> ans;

void help(vector<int>& c, int t,vector<int>&temp, int i )
{

    if(t==0)
    {
        ans.push_back(temp);
        return;
    }
    if(t<0)
    {
        return;
    }
    if(i==c.size())
    {return;
    }

    //ith ignore

    help(c,t,temp,i+1);

    //ith take

    temp.push_back(c[i]);

    help(c,t-c[i],temp,i);
    temp.pop_back();

}
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<int> temp;
      
        help(c,t,temp,0);
        return ans;
    }
};