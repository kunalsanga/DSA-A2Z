def non_repeating_num(arr):
    freq={}
    for num in arr:
        freq[num]=freq.get(num,0)+1
    result=[]
    for num in arr:
        if freq[num]==1:
            result.append(num)
    return result

arr=[9,4,9,6,7,4]
print(non_repeating_num(arr))