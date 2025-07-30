def firstunq(arr):
    freq={}
    for num in arr:
        freq[num]=freq.get(num,0)+1

    result=[]
    for num in arr:
        if freq[num]==1:
            result.append(num)
    return result

print(firstunq([1,2,2,3,4]))