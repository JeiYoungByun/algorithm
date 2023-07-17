class Accumulator{
    int value;
public:
    Accumulator(int value) {this->value = value;}
    Accumulator& add(int n) {value += n; return *this;}
    int get(){return value;}
};