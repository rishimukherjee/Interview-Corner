from collections import deque

def solve(n):
    queue = deque([9])
    while queue:
        popped = queue.popleft()
        if not  popped % n:
            return popped
        queue.append(popped * 10)
        queue.append(popped * 10 + 9)

def main():
    s = raw_input
    t = int(s())
    for test in range(t):
        n = int(s())
        print solve(n)

if __name__ == '__main__':
    main()
