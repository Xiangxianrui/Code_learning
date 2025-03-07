from random import randint


class BitTreeNode:
    def __init__(self, data):
        self.data = data
        self.lchild = None
        self.rchild = None
        self.parent = None

class BST:
    def __init__(self):
        self.root = None

    def insert(self, node, val):
        """
        插入一个值到二叉搜索树中
        :param node: 当前节点，用于插入或查找时的比较
        :param val: 要插入的值
        :return: 返回插入后的节点
        """
        # 如果当前节点为空，则创建新节点
        if not node:#
            new_node = BitTreeNode(val)
            if not self.root:  # ，特殊情况，如果树为空，则设置根节点
                self.root = new_node
            return new_node#------方便下一层递归抓取调用

        # 插入到左子树
        if val < node.data:
            node.lchild = self.insert(node.lchild, val)
            node.lchild.parent = node  # 设置父节点

        # 插入到右子树
        elif val > node.data:
            node.rchild = self.insert(node.rchild, val)
            node.rchild.parent = node  # 设置父节点

        # 如果值相等，不插入
        return node
    def query(self,node,val):
        if not node:
            return None
        elif val<node.data:
            return self.query(node.lchild,val)

        elif val>node.data:
            return  self.query(node.rchild,val)

        else:
            return node

    def __remove_type_1(self,node):#情况一，要删除的节点是叶子节点
        if not node.parent:
            self.root=None
        if node.parent.lchild==node:
            node.parent.lchild=None
        if node.parent.rchild==node:
            node.rchild=None

#第二种情况，这个数有一个节点
    def __remove_type_21(self,node):
        if not node.parent:
            if node.lchild:
                node.lchild.parent = node.parent
                node.parent.lchild = node.lchild
            if node.rchild:
                node.rchild.parent = node.parent
                node.parent.rchild = node.rchild
        else:

            if node.lchild:
                node.lchild.parent=node.parent
                node.parent.lchild=node.lchild
            if node.rchild:
                node.rchild.parent=node.parent
                node.parent.rchild=node.rchild





    def pre_order(self,root):
        if root:
            print(root.data)
            self.pre_order(root.lchild)
            self.pre_order(root.rchild)



    def in_order(self,root):
        if root:
            self.in_order(root.lchild)
            print(root.data)
            self.in_order(root.rchild)


    def post_order(self,root):
        if root:
            self.post_order(root.lchild)
            self.post_order(root.rchild)
            print(root.data)


import random
li=[ randint(1,500) for _ in range(100)]
bts=BST()
for i in li:
    bts.insert(bts.root,i)
bts.in_order(bts.root)
print(bts.query(bts.root,3))


