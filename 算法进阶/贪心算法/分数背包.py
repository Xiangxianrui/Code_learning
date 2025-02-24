goods = [(60, 10), (100, 20), (140, 30)]
# 按单位价值排序（降序）
goods = sorted(goods, key=lambda x: x[0] / x[1], reverse=True)


def fractional_bagpack(goods, total_w=50):
    nums = [0] * len(goods)  # 用于存储每个物品装入的比例
    total_value = 0  # 记录总价值

    for i, (value, single_w) in enumerate(goods):
        if single_w <= total_w:
            nums[i] = 1  # 装入整个物品
            total_value += value
            total_w -= single_w  # 减去已装入的重量
        else:
            nums[i] = total_w / single_w  # 只能装部分
            total_value += value * nums[i]
            break  # 背包已满，退出循环

    return total_value, nums


# 运行
total_value, nums = fractional_bagpack(goods, 50)
print(f"最大总价值: {total_value}")
print(f"各物品装入比例: {nums}")