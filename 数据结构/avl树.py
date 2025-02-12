from 二叉搜索树 import BitTreeNode,BST
class avl_node(BitTreeNode):
    def __init__(self,data):
        BitTreeNode.__init__(self,data)
        self.bf=0
class AVL_Tree(BST):
    def __init__(self,li=None):
        BST.__init__(self,li)

    def left_cycle(self,p,c):
        pass

