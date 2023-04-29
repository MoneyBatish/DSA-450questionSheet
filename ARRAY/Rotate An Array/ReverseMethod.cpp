void reverse(int arr[], int start, int end) {
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
    
void rotateByOneReversal(int arr[], int n) {
    reverse(arr, 0, n-2);
    reverse(arr, 0, n-1);
}
