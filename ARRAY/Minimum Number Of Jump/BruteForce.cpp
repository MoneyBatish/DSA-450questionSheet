int minJumps(int arr[], int n){
        // Your code here
        int jump=0;
        int i=0;
        while(i<n-1){
            if(arr[i]==0){
                return -1;
            }
            int next=i+1;
            for(int j=i+1;j<=arr[i]+i;j++){
                if(j>=n-1){
                    return jump+1;
                }
                if(arr[j]+j >next+arr[next]){
                    next=j;
                }
            }
            jump++;
            i=next;
        }
        return jump;
    }