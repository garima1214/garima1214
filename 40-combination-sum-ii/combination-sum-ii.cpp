class Solution {
public:
 vector<vector<int>> ans;

 void help(vector<int>& c, int t,vector<int> &temp,int i)
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
    {
        return ;

    }

    
   //ith pick
    temp.push_back(c[i]);

   

    help(c,t-c[i],temp,i+1);

    temp.pop_back();

    //ith ignore
  while(i+1<c.size() && c[i]==c[i+1] ) i++;
    help(c,t,temp,i+1);

 }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        vector<int> temp;
        sort(c.begin(),c.end());
        help(c,t,temp,0);
        return ans;
    }
};