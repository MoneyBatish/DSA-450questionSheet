//BrutForce Approach 
#include<bits/stdc++.h>
using namespace std;
int FindMax(int arr[],int n){
    int maxi=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}
int FindMin(int arr[],int n){
    int mini=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    return mini;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi=FindMax(arr,n);
    int mini=FindMin(arr,n);
    cout<<maxi<<" "<<mini<<endl;
}