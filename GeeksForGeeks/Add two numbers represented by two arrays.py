a = int(input("Enter size of 1st array = "))
array1 = list()
print("Enter elements --")
for i in range(0,a,1):
    kk = int(input())
    array1.append(kk)
b = int(input("Enter size of 2nd array = "))
array2 = list()
print("Enter elements --")
for i in range (0,b,1):
    kk = int(input())
    array2.append(kk)
sum1 = ""
for i in array1:
    sum1 = sum1 + str(i)
sum2 = ""
for i in array2:
    sum2 = sum2 + str(i)
result = int(sum1) + int(sum2)
print("Sum of array is = {}".format(result))
