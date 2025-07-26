def freqofchar(s):
    freq={}
    for ch in s:
        freq[ch]=freq.get(ch)+1
    return freq

print(freqofchar("banana"))
    