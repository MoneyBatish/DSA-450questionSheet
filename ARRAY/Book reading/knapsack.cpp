#include<bits/stdc++.h>
using namespace std;
int KnapSack(vector<int>& pages,vector<int>& quality,int i,int count,int k,int sum,int minEle,vector<vector<int>>& dp){
    if(i==0){
        if(count+1<k){
            return 0;
        }
        else{
            int mini=min(minEle,quality[0]);
            int s=sum+pages[0];
            return mini*s;
        }
    }
    if(count==k){
        return sum*minEle;
    }
    if(dp[i][count]!=-1){
        return dp[i][count];
    }
    int include=0;
    if(count<k){
        include=KnapSack(pages,quality,i-1,count+1,k,sum+pages[i],min(minEle,quality[i]),dp);
    }
    int exclude=KnapSack(pages,quality,i-1,count,k,sum,minEle,dp);
    dp[i][count]=max(include,exclude);
    return dp[i][count];
}
int solve(vector<int>&pages,vector<int>&quality,int n,int k){
    vector<vector<int>> dp(n,vector<int>(k,-1));
    int ans=KnapSack(pages,quality,n-1,0,k,0,INT_MAX,dp);
    return ans;
}
int main()
{    
    int n,k;
    cin>>n>>k;
    vector<int> pages(n);
    vector<int> quality(n);
    for(int i=0;i<n;i++){
        cin>>pages[i];
        cin>>quality[i];
    }
    int ans=solve(pages,quality,n,k);
    cout<<ans<<endl;
}