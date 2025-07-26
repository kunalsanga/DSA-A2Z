def linear_search(arr,x):
    for i,value in enumerate(arr):
        if value == x:
            return i
    return -1

arr=[2,8,4,3,6,5]
print(linear_search(arr,6))