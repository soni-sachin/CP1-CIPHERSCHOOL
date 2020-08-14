aa = input("Enter Number = ")
res = 0
poww = len(aa)
for i in range(0,len(aa)):
    res = res + int(aa[i])**poww
    # res = res + pow(int(aa[i],poww))
    
if(res==int(aa)):
    print("Number is Armstrong")
else:
    print("Number is not Armstrong")
