class HashTable:
    def __init__(self, size=100):
        self.size = size
        self.table = [None] * size

    def _hash(self, key):
        """简单的哈希函数"""
        return hash(key) % self.size

    def insert(self, key, value):
        """插入键值对"""
        index = self._hash(key)
        if self.table[index] is None:
            self.table[index] = [(key, value)]  # 处理哈希冲突，链表法
        else:
            for i, (k, v) in enumerate(self.table[index]):
                if k == key:  # 如果键已存在，更新值
                    self.table[index][i] = (key, value)
                    return
            self.table[index].append((key, value))

    def get(self, key):
        """根据键获取值"""
        index = self._hash(key)
        if self.table[index] is None:
            return None
        for k, v in self.table[index]:
            if k == key:
                return v
        return None

    def remove(self, key):
        """删除键值对"""
        index = self._hash(key)
        if self.table[index] is None:
            return False
        for i, (k, v) in enumerate(self.table[index]):
            if k == key:
                del self.table[index][i]
                return True
        return False

    def __str__(self):
        """输出哈希表内容"""
        return str([item for item in self.table if item is not None])

# 测试哈希表
hash_table = HashTable()
hash_table.insert("apple", 10)
hash_table.insert("banana", 20)
hash_table.insert("orange", 30)

print(hash_table.get("apple"))  # 输出: 10
print(hash_table.get("banana"))  # 输出: 20

hash_table.remove("apple")
print(hash_table.get("apple"))  # 输出: None

print(hash_table)  # 输出哈希表的内容
