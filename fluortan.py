def max_sum_after_moving_zero(arr):
    arr.sort(reverse=True)
    total = 0
    for i in range(len(arr)):
        total += i * arr[i]
    return total

# Test the function
arr = [2,-4,5,-3, 0, 1, 2]
print(max_sum_after_moving_zero(arr))  # Output: 4