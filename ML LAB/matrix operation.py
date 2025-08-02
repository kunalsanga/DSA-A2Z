import numpy as np
A=np.array([[1,2,3],
            [4,5,6],
            [7,8,9]])

B=np.array([[9,6,5],
            [4,3,2],
            [1,7,8]])

sum=A+B
diff=B-A
mul=A*B
d=np.dot(A,B)
print(sum)
print(diff)
print(mul)
print(d)