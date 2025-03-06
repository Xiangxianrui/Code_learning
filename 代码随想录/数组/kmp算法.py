def compute_next(p):
    """计算模式串 p 的 next 数组"""
    m = len(p)
    next_arr = [0] * m
    j = 0  # 记录前后缀匹配长度
    
    for i in range(1, m):
        while j > 0 and p[i] != p[j]:
            j = next_arr[j - 1]  # 回退到前一个相同前后缀长度
        
        if p[i] == p[j]:  
            j += 1  # 匹配成功，前后缀长度加 1
        
        next_arr[i] = j  # 记录当前最长前后缀长度
    
    return next_arr


def kmp_search(s, p):
    """
    在文本串 s 中查找模式串 p，返回匹配的起始索引
    """
    n, m = len(s), len(p)
    if m == 0:
        return 0  # 空模式串默认匹配成功
    
    next_arr = compute_next(p)
    j = 0  # 模式串的索引
    
    for i in range(n):
        while j > 0 and s[i] != p[j]:
            j = next_arr[j - 1]  # 发生不匹配，回退 j
        
        if s[i] == p[j]:
            j += 1  # 继续匹配下一个字符
        
        if j == m:  # 完全匹配
            return i - m + 1  # 返回匹配的起始位置
    
    return -1  # 未匹配