from collections import deque
def bfs(adj, start):
    visited = set()
    q = deque([start])
    while q:
        node = q.popleft()
        if node not in visited:
            print(node)
            visited.add(node)
            q.extend(adj[node])
# Example: bfs({1:[2,3], 2:[], 3:[4], 4:[]}, 1)
