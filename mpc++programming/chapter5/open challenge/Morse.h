#include <string>
#include <vector>
using namespace std;

class Morse{
    vector<string> alphabet;
    vector<string> digit;
    string slash, question, comma, period, plus, equal;
public:
    Morse();
    void text2Morse(string text, string& morse);
    void morse2Text(string morse, string& text);
};