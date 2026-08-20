PRACTICAL 1:

Summary :

This practical was used to implement and analyze five sorting algorithms: Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, and Quick Sort. Each algorithm sorts the elements in ascending order, but their working methods and execution times are different.

Bubble Sort repeatedly compares and swaps adjacent elements.(Best Case: O(n)Average Case: O(n²)Worst Case: O(n²))

Selection Sort finds the smallest element and places it in the correct position.(Best Case: O(n²)Average Case: O(n²)Worst Case: O(n²))

Insertion Sort inserts each element into its proper place in the sorted part of the array.(Best Case: O(n) Average Case: O(n²)Worst Case: O(n²))

Merge Sort divides the array into smaller parts, sorts them, and merges them.(Best Case: O(n log n) Average Case: O(n log n)Worst Case: O(n log n))

Quick Sort selects a pivot element and partitions the array into smaller subarrays.(Best Case: O(n log n) Average Case: O(n log n)Worst Case: O(n²))

Conclusion :

From this practical, we learned that every sorting algorithm has its own advantages and disadvantages. Bubble Sort, Selection Sort, and Insertion Sort are simple but slower for large datasets. Merge Sort and Quick Sort are faster and more efficient for large datasets. We also understood that choosing the right sorting algorithm depends on the size of the data and the application requirements.

PRACTICAL 2 :

Summary :

In this practical, we implemented Linear Search and Binary Search algorithms and compared their execution time.

Linear Search checks each element one by one until the element is found.(Best Case: O(1)Average Case: O(n)Worst Case: O(n))

Binary Search searches by dividing the sorted array into two halves, so it is faster.(Best Case: O(1) Average Case: O(log n)Worst Case: O(log n))

Linear Search works on both sorted and unsorted arrays. Binary Search works only on sorted arrays.

Conclusion :

Linear Search is simple and works on both sorted and unsorted arrays. Binary Search is faster but works only on sorted arrays. The time analysis shows that Binary Search takes less time than Linear Search. Therefore, Binary Search is better for large sorted data, while Linear Search is suitable for small or unsorted data.

PRACTICAL-3 :

Summary

In this experiment, Heap Sort was implemented using Python. The algorithm first creates a Max Heap from the given elements and then repeatedly moves the largest element to the end of the list. The heap is adjusted after each step until the complete list is sorted. Execution time was also measured to observe the performance of the algorithm.

Conclusion

Heap Sort is an efficient sorting algorithm that provides O(n log n) time complexity in the best, average, and worst cases. It works in-place and is suitable for sorting large datasets. This experiment helped in understanding heap creation, heapify operations, element extraction, and sorting using a binary heap.

PRACTICAL-4

Summary

Factorial of a number was calculated using two methods: Iterative and Recursive. The iterative method uses a loop to multiply numbers from 1 to n, while the recursive method calls itself with n-1 until it reaches the base case of 0 or 1. Both methods produce the same factorial result.

Conclusion

The experiment helped understand the difference between iteration and recursion. The iterative method uses less memory, while the recursive method provides a simpler and more mathematical approach. Both methods have O(n) time complexity and can be used to calculate factorial effectively.

PRACTICAL-7

Summary

The Making Change Problem was implemented using Dynamic Programming. The program stores previously calculated results and uses them to find the minimum number of coins required for the given amount.

Conclusion

Dynamic Programming provides an efficient solution to the Making Change Problem by avoiding repeated calculations. It is useful when the problem contains overlapping subproblems and optimal substructure.

