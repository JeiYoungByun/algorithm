#include <string>
using namespace std;

class Person {
    string name;
    string tel;
public:
    string getName() { return name; }
    string getTel() { return tel; }
    void set(string name, string tel) {
        this->name = name;
        this->tel = tel;
    }
};