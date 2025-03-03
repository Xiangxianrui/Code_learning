class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()  # 排序数组
        n = len(nums)
        res = []
        
        for i in range(n):
            if nums[i] > 0:  # 如果当前元素大于0，后面的元素和不可能为0，直接结束循环
                break
            if i > 0 and nums[i] == nums[i - 1]:  # 跳过重复元素
                continue
            
            left, right = i + 1, n - 1  # 初始化左右指针
            while left < right:
                total = nums[i] + nums[left] + nums[right]
                
                if total > 0:
                    right -= 1  # 如果总和大于0，右指针左移
                elif total < 0:
                    left += 1  # 如果总和小于0，左指针右移
                else:
                    res.append([nums[i], nums[left], nums[right]])  # 找到符合条件的三元组
                    
                    # 跳过重复的左指针元素
                    while left < right and nums[left] == nums[left + 1]:
                        left += 1
                    # 跳过重复的右指针元素
                    while left < right and nums[right] == nums[right - 1]:
                        right -= 1
                    # 移动指针
                    left += 1
                    right -= 1
        
        return res  # 返回所有符合条件的三元组
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


class Solution:
    def threeSum(self,nums):
        nums.sort()
        n=len(nums)
        res=[]
        for i in range(n-2):
            left = i+1#第一个数
            right = n-1#最后一个数

            if nums[i] > 0:
                break
            if i > 0 and nums[i] == nums[i-1]:
                continue
            while left < right:
                Sum = nums[i] + nums[left] + nums[right]
                if Sum > 0:
                    right -=1
                elif Sum <0:
                    left +=1
                else:
                    res.append([nums[i],nums[left],nums[right]])

            #去除重复元素
                    while left < right and nums[left] == nums[left+1]:#左边出现了重复数
                        left+=1#一直往右移，直到最后一个重复数字
                    while left < right and nums[right] == nums[right-1]:
                        right-=1
                    left += 1
                    right -= 1

                
                

        return res
                
