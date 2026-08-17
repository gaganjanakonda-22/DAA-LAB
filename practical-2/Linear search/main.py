import time

def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1

# Get user input for the list
user_list = [int(x) for x in input("Enter numbers separated by spaces: ").split()]
target_val = int(input("Enter the number to search for: "))

# Measure execution time
start_time = time.perf_counter()
result = linear_search(user_list, target_val)
end_time = time.perf_counter()

# Output results
if result != -1:
    print(f"Target found at index: {result}")
else:
    print("Target not found in the list.")

print(f"Execution time: {(end_time - start_time):.8f} seconds")

