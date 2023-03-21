//Brut Force Time Complexity of O(N*K)
#include<bits/stdc++.h>
using namespace std;
int FindMax(int arr[],int n,int k){
    int maxi=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[maxi]){
                maxi=j;
            }
        }
        if(i!=k-1){
            arr[maxi]=INT_MIN;
        }
    }
    return arr[maxi];
}
int FindMin(int arr[],int n,int k){
    int mini=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        if(i!=k-1){
            arr[mini]=INT_MAX;
        }
    }
    return arr[mini];
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
    cout<<mini<<endl;
}