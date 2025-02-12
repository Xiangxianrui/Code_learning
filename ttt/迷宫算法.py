# 迷宫矩阵，0 代表可以走，1 代表墙壁
maze = [
    [0, 0, 1, 0, 0],
    [1, 0, 1, 1, 0],
    [0, 0, 0, 1, 0],
    [0, 1, 1, 0, 0],
    [0, 0, 1, 0, 0]
]

# 定义方向，上、下、左、右
directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]  # 上下左右
start = (0, 0)  # 起点位置
end = (4, 4)  # 终点位置

# 记录已经访问的路径
visited = set()


# 机器人走动的过程
def move_robot(maze, start, end):
    # 使用栈进行深度优先搜索（DFS）
    stack = [start]
    visited.add(start)

    while stack:
        current = stack.pop()  # 获取当前点
        if current == end:
            print("到达终点:", current)
            return True

        x, y = current
        for dx, dy in directions:
            nx, ny = x + dx, y + dy  # 计算新位置
            if 0 <= nx < len(maze) and 0 <= ny < len(maze[0]) and maze[nx][ny] == 0 and (nx, ny) not in visited:
                stack.append((nx, ny))  # 如果可以走，加入栈
                visited.add((nx, ny))  # 标记为已访问

    print("无法到达终点")
    return False


move_robot(maze, start, end)