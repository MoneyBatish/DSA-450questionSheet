//Sort Array And Return MAX And Min
#include<bits/stdc++.h>
using namespace std;
int FindMax(int arr[],int n,int k){
    sort(arr,arr+n);
    return arr[n-k];
}
int FindMin(int arr[],int n,int k){
    sort(arr,arr+n);
    return arr[k-1];
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
    int k;
    cin>>k;
    int maxi=FindMax(arr,n,k);
    int mini=FindMin(arr,n,k);
    cout<<maxi<<" "<<mini<<endl;
}