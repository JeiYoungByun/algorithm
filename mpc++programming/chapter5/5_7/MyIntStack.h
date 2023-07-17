class MyIntStack{
    int p[10];
    int tos;
public:
    MyIntStack() {tos = 0;}
    bool push(int n);
    bool pop(int &n);
};