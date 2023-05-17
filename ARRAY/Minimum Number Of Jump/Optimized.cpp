int minJumps(int arr[], int n){
        // Your code here
        int jump=0;
        int start=0;
        int end=0;
        for(int i=0;i<n-1;i++){
            end=max(end,arr[i]+i);
            if(start==i){
                start=end;
                jump++;
            }
        }
        if(start<n-1){
            return -1;
        }
        return jump;
    }