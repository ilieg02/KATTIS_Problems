import sys

lines = sys.stdin.readlines()

sum1 = 0
sum2 = 0
for n in lines[1].split():
    sum1 += int(n)
    
for m in lines[2].split():
    sum2 += int(m)
    
if sum1 == sum2:
    print("either")
elif sum1 < sum2:
    print("left")
else:
    print("right")