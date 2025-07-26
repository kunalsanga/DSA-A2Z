s = "hello"
print(s[1:4])        # ell
print(s[::-1])       # reverse

# Check palindrome
def is_palindrome(s):
    return s == s[::-1]

# Frequency count
from collections import Counter
print(Counter(s))    # Counter({'l': 2, 'h': 1, 'e': 1, 'o': 1})
