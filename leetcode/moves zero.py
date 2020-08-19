class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        res = list()
        c = 0
        num = list()
        for i in nums:
            num.append(i)
        kkk = len(nums)
        nums.clear()
        for i in num:
            if i !=0:
                nums.append(i)
            else:
                c = c+1
        for i in range(kkk-c,kkk):
            pp = 0
            nums.append(pp)
        print(nums)
