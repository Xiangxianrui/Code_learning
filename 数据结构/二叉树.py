class BitTreeNode:
    def __init__(self,data):
        self.data=data
        self.lchild=None
        self.rchild=None



a=BitTreeNode('A')
b=BitTreeNode('B')
c=BitTreeNode('C')
d=BitTreeNode('D')
e=BitTreeNode('E')
f=BitTreeNode('F')
g=BitTreeNode('G')

root=e
e.lchild=a
e.rchild=g
a.rchild=c
c.lchild=b
c.rchild=b
g.rchild=f
# print(root.lchild.rchild.data)
#先序遍历-->根节点->左节点->右节点
def preorder(root):
    if root:
        print(root.data)
        preorder(root.lchild)
        preorder(root.rchild)
preorder(root)
def in_order(root):
    if root:
        in_order(root.lchild)
        print(root.data)
        print(root.rchild)

def post_order():
    if root:
        preorder(root.lchild)
        preorder(root.rchild)
        print(root.data)



