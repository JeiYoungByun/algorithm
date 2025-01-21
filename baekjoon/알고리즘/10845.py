class Stack:
    def __init__(self):
        self.data = []

    def push(self, x):
        self.data.append(x)

    def pop(self):
        if not self.data:
            return -1
        return self.data.pop(0)

    def size(self):
        return len(self.data)

    def empty(self):
        return 0 if self.data else 1
    
    def front(self):
        if not self.data:
            return -1
        return self.data[0]

    def back(self):
        if not self.data:
            return -1
        return self.data[-1]

n = int(input())
results = []
stack = Stack()

for _ in range(n):
    string = input()

    if string == 'pop':
        results.append(stack.pop())

    elif string == 'size':
        results.append(stack.size())
    
    elif string == 'empty':
        results.append(stack.empty())
    
    elif string == 'front':
        results.append(stack.front())

    elif string == 'back':
        results.append(stack.back())
    
    else:
        _, b = string.split()
        num = int(b)
        stack.push(num)

print('\n'.join(map(str, results)))