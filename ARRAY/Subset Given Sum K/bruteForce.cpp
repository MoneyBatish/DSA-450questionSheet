#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n,int k,int i,vector<vector<int>>&ans,vector<int>&temp,int sum){
    if(i>=n){
        if(sum==k){
            ans.push_back(temp);
        }
        return;
    }
    temp.push_back(arr[i]);
    solve(arr,n,k,i+1,ans,temp,sum+arr[i]);
    temp.pop_back();
    solve(arr,n,k,i+1,ans,temp,sum);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    vector<vector<int>>ans;
    vector<int>temp;
    solve(arr,n,k,0,ans,temp,0);
    
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}