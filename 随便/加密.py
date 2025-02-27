import math

class FractionEncoding:
    def __init__(self, numerator, denominator, precision=10):
        self.numerator = numerator  # 分子
        self.denominator = denominator  # 分母
        self.precision = precision  # 限制小数位数

    def encode(self, text):
        # 将文本转为数字（简单示例，ASCII码求和）
        number = sum(ord(c) for c in text)
        
        # 将数字映射为近似的分数
        # 这里我们假设用 number / 1000 作为一个简单的分数表示
        self.numerator = number
        self.denominator = 1000
        
        return self.numerator / self.denominator  # 返回分数的值作为数字表示

    def decode(self):
        # 使用倒推法，恢复信息
        # 假设数字是通过 sum(ord(c)) 编码的，并且精度为 precision
        fractional_value = self.numerator / self.denominator
        decoded_value = int(fractional_value * 1000)  # 反推得到数字
        
        # 将数字转换回字符，示例情况下假设所有字符的ASCII值相加
        decoded_text = ''
        while decoded_value > 0:
            decoded_text = chr(decoded_value % 256) + decoded_text
            decoded_value //= 256  # 假设ASCII限制
        return decoded_text

# 示例使用：
encoding = FractionEncoding(0, 0)

# 编码过程：将字符串转换为分数
encoded_value = encoding.encode("helloandiloveyou")
print(f"Encoded value: {encoded_value}")

# 解码过程：从分数恢复原始信息
decoded_text = encoding.decode()
print(f"Decoded text: {decoded_text}")