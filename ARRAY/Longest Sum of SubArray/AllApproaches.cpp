long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        // int maxSum=INT_MIN;
        // for(int i=0; i<n; i++){
        //     for(int j=i; j<n; j++){
        //         int sum=0;
        //         for(int k=i; k<=j; k++){
        //             sum+=arr[k];
        //         }
        //             maxSum=max(sum,maxSum);
        //     }
        // }
        // return maxSum;
        
        // Time Complexity O(n2)
        
        // int maxSum=INT_MIN;
        // for(int i=0; i<n; i++){
        //     int sum=0;
        //     for(int j=i; j<n; j++){
        //         sum+=arr[j];
        //         maxSum=max(sum,maxSum);
        //     }
        // }
        // return maxSum;
        
        // time complexity O(n) using kadane's algo
        int maxSum=INT_MIN;
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            maxSum=max(sum,maxSum);
            if(sum<0) sum=0;
        }
        return maxSum;
        
    }