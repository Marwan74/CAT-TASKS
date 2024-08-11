#include <stdio.h>

int binarySearch(int arr[], int start, int end, int target) {
    if (start > end) {
        return -1;
    }
    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
        return mid;
    }

    if (arr[mid] > target) {
        return binarySearch(arr, start, mid - 1, target);
    }

    return binarySearch(arr, mid + 1, end, target);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i =0; i<n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int target ;
    scanf("%d",&target);

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
