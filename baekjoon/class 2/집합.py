class SetUp:
    def __init__(self):
        self.s = set()
    
    def add(self, x):
        self.s.add(x)  

    def remove(self, x):
        self.s.discard(x)  

    def check(self, x):
        return 1 if x in self.s else 0
            
    def toggle(self, x):
        (self.s.remove(x) if x in self.s else self.s.add(x))
    
    def all(self):
        self.s = set(range(1, 21))
        
    def empty(self):
        self.s.clear()

play = SetUp()
result = []

n = int(input())
for _ in range(n):
    a = input().split()  
    command = a[0]
    
    if command == "all":
        play.all()
        
    elif command == "empty":
        play.empty()
        
    elif command == "add":
        play.add(int(a[1]))
        
    elif command == "remove":
        play.remove(int(a[1]))
        
    elif command == "check":
        result.append(str(play.check(int(a[1]))))
        
    elif command == "toggle":
        play.toggle(int(a[1]))

print("\n".join(result))
