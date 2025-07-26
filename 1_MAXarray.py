def find_maximum(arr):
    if not arr:
        return None
    maximum = arr[0]
    for num in arr:
        if num>maximum:
            maximum=num
    return maximum

arr=[3,6,1,4,5,9,0,12,34,6,6787,878,8786,232]
print("maximum:",find_maximum(arr))