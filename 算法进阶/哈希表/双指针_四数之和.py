#给你一个由 n 个整数组成的数组 nums ，和一个目标值 target 。请你找出并返回满足下述全部条件且不重复的四元组 [nums[a], nums[b], nums[c], nums[d]] 
# （若两个四元组元素一一对应，则认为两个四元组重复）：
class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]: