# def compute_next(p):
#     """计算模式串 p 的 next 数组"""
#     m = len(p)
#     next_arr = [0 for i in range(m)] #初始化匹配表      next_arr[i]表示的是这个数组从 0 到 i 位的最长匹配前后缀数组
#     j = 0  # 记录前后缀匹配长度//////初始化为 0
    
#     for i in range(1, m):
#         while j > 0 and p[i] != p[j]:# j > 0 避免回溯超出range，
#             j = next_arr[j - 1]  # 回退到前一个相同前后缀长度
        
#         if p[i] == p[j]:  
#             j += 1  # 匹配成功，前后缀长度加 1
        
#         next_arr[i] = j  # 记录当前最长前后缀长度
    
#     return next_arr


# def kmp_search(s, p):
#     """
#     在文本串 s 中查找模式串 p，返回匹配的起始索引
#     """
#     n, m = len(s), len(p)
#     if m == 0:
#         return 0  # 空模式串默认匹配成功
    
#     next_arr = compute_next(p)
#     j = 0  # 模式串的索引
    
#     for i in range(n):
#         while j > 0 and s[i] != p[j]:
#             j = next_arr[j - 1]  # 发生不匹配，回退 j
        
#         if s[i] == p[j]:
#             j += 1  # 继续匹配下一个字符
        
#         if j == m:  # 完全匹配
#             return i - m + 1  # 返回匹配的起始位置
    
#     return -1  # 未匹配


# #计算思路---->在做 字符匹配（给两个字符，判断短的字符串是否在于唱的字符串中，如果存在则返回第一次重合的地方，如果不存在则返回-1）
# """


# """

def get_next(p):
    next = [0] * len(p)
    next[0] = -1  # 第一个字符没有前缀，固定为-1
    prefix_len = 0  # 当前最长匹配的前缀长度
    i = 1          # 从第二个字符开始计算

    while i < len(p):
        if p[i] == p[prefix_len]:
            # 如果当前字符匹配，前缀长度+1
            prefix_len += 1
            next[i] = prefix_len
            i += 1
        else:
            # 如果不匹配，回退到更短的前缀
            if prefix_len == 0:
                next[i] = 0
                i += 1
            else:
                prefix_len = next[prefix_len - 1]  # 关键回退！
    return next

