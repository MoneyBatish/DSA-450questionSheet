//RECURSION

#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n,int num)
{
    if(num==n)
    {
        return;
    }

    int val=arr[num];
    reverse(arr,n,num+1);
    arr[n-num-1]=val;
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
    reverse(arr,n,0);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}