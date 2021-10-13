import math 
x = int(input())
y = int(input())
if x < 1 or x > -1:
    up = float(math.sqrt(4 - ((x - 1) * (x - 1))))
    down = float(math.sqrt(4 - ((x - 1) * (x - 1))))
    if y < up or y > down:
        print("Point belongs to plane")
    else:
       print("Point doesn't belong to plane")
else:
    if x >= 1 or x < 3:
        up = float(3-x)
        down = float(x-3)
    if y < up or y > down:
        print("Point belongs to plane")
    else:
        print("Point doesn't belong to plane")