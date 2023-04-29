void rotateByOneTempArray(int arr[], int n) {
    int temp[n];
    temp[0] = arr[n-1];
    for(int i=0; i<n-1; i++)
        temp[i+1] = arr[i];
    for(int i=0; i<n; i++)
        arr[i] = temp[i];
}
