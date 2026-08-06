#include <stdio.h>
#include <time.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int size, target;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];
    printf("Enter %d integers (MUST BE IN SORTED ORDER):\n", size);
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Enter the element to search for: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid target element.\n");
        return 1;
    }

    clock_t start, end;
    double cpu_time_used;

    printf("\nArray: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSearching for: %d\n\n", target);

    start = clock();
    int result = binarySearch(arr, size, target);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    if (result != -1) {
        printf("Result: Element found at index %d\n", result);
    } else {
        printf("Result: Element not found in the array\n");
    }

    printf("\n================ TIME ANALYSIS ================\n");
    printf("Best-Case Time Complexity  : O(1) (Element is at the exact middle)\n");
    printf("Worst-Case Time Complexity : O(log n) (Element requires full space division)\n");
    printf("Actual Execution Time      : %f seconds\n", cpu_time_used);
    printf("===============================================\n");

    return 0;
}
