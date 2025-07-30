def first_unique_num(arr):
    freq={}
    for num in arr:
        freq[num]=freq.get(num,0)+1
    for num in arr:
        if freq[num] == 1:
            return num
    return None

print(first_unique_num([1,2,2,3,4]))