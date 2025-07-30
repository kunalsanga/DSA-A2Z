def remove_duplicates(num):
    i=0
    for n in num:
        if i==0 or n!=num[i-1]:
            num[i]=n
            i+=1
    return i
    
arr=[1,2,3,3,4]
k=remove_duplicates(arr)

print(k)
print(arr[:k])