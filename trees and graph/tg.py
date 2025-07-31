class Node:
    def __init__(self, data):
        self.data = data
        self.left = self.right = None

def inorder(root):
    if root:
        inorder(root.left)
        print(root.data)
        inorder(root.right)
