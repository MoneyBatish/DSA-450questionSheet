int getPairsCount(int arr[], int n, int k) {
        // code here
        int count = 0;
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            int complement = k - arr[i];
            if (freq.count(complement)) {
                count += freq[complement];
            }
            freq[arr[i]]++;
        }
        return count;
    }