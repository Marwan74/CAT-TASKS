#include <stdio.h>

#define MAX_SIZE 100

void deleteElement(int arr[], int *size, int position) {
    if (position < 1 || position > *size) {
        printf("Error: Invalid position.\n");
        return;
    }

    for (int i = position - 1; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }


    (*size)--;
}

int main() {
    int arr[MAX_SIZE];
    int size, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the element to delete: ");
    scanf("%d", &position);
    deleteElement(arr, &size, position);

    if (size > 0) {
        printf("Array after deletion:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
