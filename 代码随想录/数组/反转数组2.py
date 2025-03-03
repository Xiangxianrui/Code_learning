# 给定一个字符串 s 和一个整数 k，从字符串开头算起，每计数至 2k 个字符，就反转这 2k 字符中的前 k 个字符。

# 如果剩余字符少于 k 个，则将剩余字符全部反转。
# 如果剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符，其余字符保持原样。
class Solution:
    def reverseStr(self, s, k):
        n = len(s)
        new_s = list(s)  # 将字符串转换成列表，以便修改
        i = 0
        while i < n:
            # 如果当前位置到 n 之间的元素个数小于 k
            if i + k <= n:
                self.reserve1(new_s, i, i + k)
            else:
                self.reserve1(new_s, i, n)
            
            i += 2 * k  # 每次跳跃 2k，处理下一个区间

        return "".join(new_s)  # 将修改后的列表转换回字符串

    def reserve1(self, li, start, end):
        # 反转从 start 到 end 之间的元素
        stuck = []
        for i in range(start, end):
            stuck.append(li[i])
        for i in range(start, end):
            li[i] = stuck.pop()  # 从栈中取出元素并放回原位置
