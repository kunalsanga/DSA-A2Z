def twosum(arr,target):
    seen=set()
    for num in arr:
        if target - num in seen:
            return True
        seen.add(num)
    return False
print(twosum([2,7,8,5],13))
