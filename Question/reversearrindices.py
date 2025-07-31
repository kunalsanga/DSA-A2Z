def reversearrindicies(arr,left,right):
    while left < right:
        arr[left],arr[right]=arr[right],arr[left]
        left+=1
        right-=1
    return arr

print(reversearrindicies([1,2,3,4,5],1,3))