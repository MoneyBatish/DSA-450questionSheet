//Two Pointer Approach
#include<bits/stdc++.h>
using namespace std;
vector<int>FindUnion(int arr1[],int arr2[],int n,int m){
    vector<int>ans;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr1[i]>arr2[j]){
            ans.push_back(arr2[j]);
            j++;
        }
        else if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while(i<n){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        ans.push_back(arr2[j]);
        j++;
    }
    return ans;
}
vector<int>FindIntersection(int arr1[],int arr2[],int n,int m){
    vector<int>ans;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr1[i]>arr2[j]){
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    vector<int>Union=FindUnion(arr1,arr2,n,m);
    vector<int>Intersection=FindIntersection(arr1,arr2,n,m);

    cout<<"Union :"<<endl;
    for(int i=0;i<Union.size();i++){
        cout<<Union[i]<<" ";
    }
    cout<<endl;
    cout<<"Intersection :"<<endl;
    for(int i=0;i<Intersection.size();i++){
        cout<<Intersection[i]<<" ";
    }
}