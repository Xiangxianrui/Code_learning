def get_sum_of_squares(num: int) -> int:
    total = 0
    while num > 0:
        digit = num % 10  # 获取当前数字的最后一位
        total += digit * digit  # 计算该数字的平方并累加
        num //= 10  # 移除最后一位
    return total


class Solution:
    def isHappy(self, n: int) -> bool:
        seen = set()
        while n != 1:
            n = get_sum_of_squares(n)
            if n in seen:
                return False
            seen.add(n)
        return True
#更新判断是否陷入循环的参数的时候要注意