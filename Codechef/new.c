#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

void rearrangeArray(int arr[], int n) {
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_index])
            min_index = i;
    }
    swap(&arr[0], &arr[min_index]);
    selectionSort(arr + 1, n - 1);
}

int main() {
    int arr[] = {3, 1, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrangeArray(arr, n);

    printf("The rearranged array is: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

