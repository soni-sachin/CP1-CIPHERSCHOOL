a = input("Enter elements of array = ")
b = a.split(" ")
c = list()
d = list()
for i in b:
    c.append(int(i))
    d.append(int(i))
for i in range(0,len(c),1):
    d[c[i]]=i
if(d==c):
    print("Yes")
else:
    print("No")
