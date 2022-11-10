x = []
y = []
print("Enter Coordinates : ")
for i in range(4):
    a = int(input())
    x.append(a)
    b = int(input())
    y.append(b)
if((x[1] - x[0])* (x[3]-x[2])+ (y[3]-y[2])*(y[1]-y[0]) == 0):
    print("Orthogonal lines")
else:
    print("not Orthogonal lines")