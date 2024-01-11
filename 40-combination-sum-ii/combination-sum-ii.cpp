class Solution {
public:
 vector<vector<int>> ans;

 void help(vector<int>& c, int t,vector<int> &temp,int i,int sum)
 {
    if(t==sum)
    {
        ans.push_back(temp);
        return;
    }
    if(t<sum)
    {
        return;
    }
    if(i==c.size())
    {
        return ;

    }

    
   //ith pick
    temp.push_back(c[i]);
   sum = sum+c[i];
   

    help(c,t,temp,i+1,sum);

    temp.pop_back();
    sum =sum-c[i];
    //ith ignore
  while(i+1<c.size() && c[i]==c[i+1] ) i++;
    help(c,t,temp,i+1,sum);

 }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        vector<int> temp;
        sort(c.begin(),c.end());
        help(c,t,temp,0,0);
        return ans;
    }
};