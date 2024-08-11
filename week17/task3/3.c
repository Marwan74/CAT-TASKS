#include <stdio.h>

#define MAX_SIZE 100

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    int i, j;

    for (i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }

    for (j = 0; j < size2; j++) {
        mergedArr[i + j] = arr2[j];
    }
}

void bubbleSort(int arr[], int size) {
    int i, j;
    int temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergedArr[MAX_SIZE * 2];
    int size1, size2;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &size1);

    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &size2);

    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    mergeArrays(arr1, size1, arr2, size2, mergedArr);
    int mergedSize = size1 + size2;
    bubbleSort(mergedArr, mergedSize);

    printf("merged array in ascending order :\n");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}


