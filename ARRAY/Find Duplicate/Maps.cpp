int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>map;
        int n=nums.size();
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        int maxVal=0;
        for(auto i:map){
            if(i.second>1){
                maxVal=i.first;
            }
        }
        return maxVal;
    }