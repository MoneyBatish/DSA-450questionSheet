//MaxHeap And MinHeap

#include<bits/stdc++.h>
using namespace std;
int FindMax(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>>PQ;
    for(int i=0;i<k;i++){
        PQ.push(arr[i]);
    }

    for(int i=k;i<n;i++){
        if(arr[i]>PQ.top()){
            PQ.pop();
            PQ.push(arr[i]);
        }
    }
    return PQ.top();
}
int FindMin(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>>PQ;
    for(int i=0;i<k;i++){
        PQ.push(arr[i]);
    }

    for(int i=k;i<n;i++){
        if(arr[i]<PQ.top()){
            PQ.pop();
            PQ.push(arr[i]);
        }
    }
    return PQ.top();
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