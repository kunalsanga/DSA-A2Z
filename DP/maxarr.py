def max_subarray(arr):
    curr = max_sum = arr[0]
    for num in arr[1:]:
        curr = max(num, curr + num)
        max_sum = max(max_sum, curr)
    return max_sum
print(max_subarray([-2,1,-3,4,-1,2,1,-5,4])) # 6
