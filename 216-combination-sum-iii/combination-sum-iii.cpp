class Solution {
public:
vector<vector<int>> ans ;
void help(int k, int n , vector<int> &temp,int i,int count)
{
    if(n==0&&count ==k)
    {
      ans.push_back(temp);
      return;
    }
    if(n<0)
    return;
    if(i==10)
    return ;

    help(k,n,temp,i+1,count);
     temp.push_back(i);
     help(k,n-i,temp,i+1,count+1);
     temp.pop_back();

}
    vector<vector<int>> combinationSum3(int k, int n) {
         vector<int> temp;
         int count =0;
         help(k,n,temp,1,0);
         return ans;
    }
};