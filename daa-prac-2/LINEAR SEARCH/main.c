#include <stdio.h>
#include <time.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
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
    printf("Enter %d integers:\n", size);
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
    int result = linearSearch(arr, size, target);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    if (result != -1) {
        printf("Result: Element found at index %d\n", result);
    } else {
        printf("Result: Element not found in the array\n");
    }

    printf("\n================ TIME ANALYSIS ================\n");
    printf("Best-Case Time Complexity  : O(1) (Element is at the first position)\n");
    printf("Worst-Case Time Complexity : O(n) (Element is at the end or missing)\n");
    printf("Actual Execution Time      : %f seconds\n", cpu_time_used);
    printf("===============================================\n");

    return 0;
}
