#include <string>
using namespace std;

class Integer {
    int num = 0;
    string s;
public:
    Integer(int a) : num(a) {}

    Integer(string c) : s(c) {}

    int get() {
        if(s != "") num = stoi(s);
        return num;
    }
    
    int set(int k) {
        num = k;
        return num;
    }
    
    bool isEven() {
        if(num%2 == 0) return true;
        else return false;
    }
};