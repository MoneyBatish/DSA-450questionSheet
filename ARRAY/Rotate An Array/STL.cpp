#include <algorithm>

void rotateByOneSTL(int arr[], int n) {
    std::rotate(arr, arr+n-1, arr+n);
}
