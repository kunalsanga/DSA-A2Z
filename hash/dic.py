d={"a":1,"b":2}
d["c"]=3
print(d["a"])

s = "banana"
freq={}
for ch in s:
    freq[ch]=freq.get(ch,0)+1