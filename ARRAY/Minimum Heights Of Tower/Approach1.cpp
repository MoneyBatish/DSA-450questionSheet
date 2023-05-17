int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int maxEle,minEle;
        int ans=arr[n-1] -arr[0];
        for(int i=1;i<=n-1;i++){
            if(arr[i]-k>=0){
                maxEle=max(arr[i-1]+k,arr[n-1]-k);
                minEle=min(arr[0]+k,arr[i]-k);
                
                ans=min(ans,maxEle-minEle);
            }
        }
        return ans;
    }