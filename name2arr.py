def entername(name):
    result=[]
    for ch in name:
        result.append(ch)
    return result

name=input("enter you name: ")
print(entername(name))