aa = input("Enter Binary Number = ")
res = 0
poww = 0
for i in range(len(aa)-1,-1,-1):
    res = res + int(aa[i])*pow(2,poww)
    poww = poww+1
print("Equivalent Decimal Number is = ",format(res))
