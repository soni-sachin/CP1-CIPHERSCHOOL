nums=[1,0,2,35,0,1]
res = list()
c = 0
for i in nums:
    if i !=0:
        res.append(i)
    else:
        c = c+1
for i in range(len(nums)-c,len(nums)):
    pp = 0
    res.append(pp)
print(res)
