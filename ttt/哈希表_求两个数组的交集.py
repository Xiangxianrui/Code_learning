#给定两个数组 nums1 和 nums2 ，返回 它们的
#交集。输出结果中的每个元素一定是 唯一 的。我们可以 不考虑输出结果的顺序 。from typing import List

class Solution:
    def intersection(self, nums1, nums2 ):
        set1 = set(nums1)  # 先将 nums1 放入集合
        result_set = set()  # 用于存储交集，保证唯一性

        for num in nums2:  # 遍历 nums2
            if num in set1:  # 如果 num 在 nums1 里
                result_set.add(num)  # 存入结果集合

        return list(result_set)  # 转换为列表返回

