#给你一个由 n 个整数组成的数组 nums ，和一个目标值 target 。请你找出并返回满足下述全部条件且不重复的四元组 [nums[a], nums[b], nums[c], nums[d]] 
# （若两个四元组元素一一对应，则认为两个四元组重复）：
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