//Recursion
#include<bits/stdc++.h>
using namespace std;
int FindMax(int arr[], int n) {
    if(n==1){
        return arr[0];
    }
    return max(arr[n-1],FindMax(arr,n-1));
}
int FindMin(int arr[], int n) {
   if(n==1){
        return arr[0];
    }
    return min(arr[n-1],FindMax(arr,n-1));
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