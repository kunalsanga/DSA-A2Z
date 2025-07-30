def  binarysearch(arr,x):
    left,right=0,len(arr)-1
    while left<=right:
        mid=(left+right)//2
        if arr[mid]==x:
            return mid
        elif arr[mid]<x:
            left=mid+1
        else:
            right=mid-1
    return -1

arr=[1,2,3,4,5,6,7,8,9]
print(binarysearch(arr,10))