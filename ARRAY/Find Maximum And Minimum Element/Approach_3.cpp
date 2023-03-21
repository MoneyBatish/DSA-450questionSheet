// Push Into Maxheap And MinHeap
#include<bits/stdc++.h>
using namespace std;
int FindMax(int arr[],int n){
    priority_queue<int>MaxHeap;
    for(int i=0;i<n;i++){
        MaxHeap.push(arr[i]);
    }
    return MaxHeap.top();
}
int FindMin(int arr[],int n){
    priority_queue<int,vector<int>,greater<int>>MinHeap;
    for(int i=0;i<n;i++){
        MinHeap.push(arr[i]);
    }
    return MinHeap.top();
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