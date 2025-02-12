class Node:
    def __init__(self,name,type):
        self.name=name
        self.type=type
        self.children=[]
        self.parent=None