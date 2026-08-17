import time

def binary_search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = (left + right) // 2
        
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
            
    return -1

# Get user input for the list
user_list = [int(x) for x in input("Enter numbers separated by spaces: ").split()]
target_val = int(input("Enter the number to search for: "))

# Binary search requires sorted data
user_list.sort()
print(f"Sorted list being searched: {user_list}")

# Measure execution time
start_time = time.perf_counter()
result = binary_search(user_list, target_val)
end_time = time.perf_counter()

# Output results
if result != -1:
    print(f"Target found at index: {result} (in the sorted list)")
else:
    print("Target not found in the list.")

print(f"Execution time: {(end_time - start_time):.8f} seconds")
