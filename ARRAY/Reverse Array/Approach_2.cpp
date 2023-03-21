//STACK

#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n)
{
    stack<int>s;
    for(int i=0;i<n;i++)
    {
        s.push(arr[i]);
    }
    int i=0;
    while(!s.empty())
    {
        int val=s.top();
        s.pop();
        arr[i]=val;
        i++;
    }
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
    reverse(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}