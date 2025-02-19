
#双指针法
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        n = len(nums)
        res=[]
        i=0
        for i in range(n):
            if nums[i]>0:#整个列表示排序过的，所以是一个递增数列，如果第一个数就大于 0，那后面的数的和也必然大于 0
                break
            if i>0 and nums[i]==nums[i-1]:#如果是 0 的话，直接访问前一个数的时候就会超出列表范围
                continue
                left=i+1
                right=n-1
                while left<right:
                    if nums[i]+nums[left]+nums[right]>0:
                        right-=1
                    elif nums[i]+nums[left]+nums[right]<0:
                        left+=1
                    else:
                        res.append([[nums[i]],nums[left],nums[right]])    
        return res    

#哈希表法
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()  # 排序数组，方便去重
        res = []
        n = len(nums)
        
        for i in range(n):
            if i > 0 and nums[i] == nums[i - 1]:  # 跳过重复元素
                continue
            
            target = -nums[i]  # 目标值
            seen = {}  # 哈希表用于记录已经遍历的元素
            
            # 遍历当前元素之后的所有元素
            for j in range(i + 1, n):
                complement = target - nums[j]  # 计算目标补数
                
                # 检查补数是否在哈希表中出现过
                if complement in seen:
                    res.append([nums[i], nums[j], complement])  # 找到符合条件的三元组
                    # 跳过重复的补数
                    while j + 1 < n and nums[j] == nums[j + 1]:
                        j += 1
                
                # 将当前元素 nums[j] 添加到哈希表中
                seen[nums[j]] = True
        
        return res                    