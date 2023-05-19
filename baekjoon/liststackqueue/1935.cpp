#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <iomanip>
#include <map>
#include <set>

using namespace std;

int main() {
    stack<double> st; 
    int n;
    string str;
    int x;
    double a, b;
    double result;
    set<char> my_set;

    cin >> n;
    cin.ignore();
    getline(cin, str);

    map<char, int> char_to_int; // 문자를 정수에 매핑하는 맵 생성

    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i]) && my_set.find(str[i]) == my_set.end()) {
            cin >> x;
            char_to_int[str[i]] = x; // 맵에 문자와 정수를 저장
            my_set.insert(str[i]);
        }
    }

    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            st.push(char_to_int[str[i]]); // 맵에서 정수를 가져옴
        } else {
            switch (str[i]) {
                case '+':
                    a = st.top();
                    st.pop();
                    b = st.top();
                    st.pop();
                    result = a + b;
                    break;

                case '-':
                    a = st.top();
                    st.pop();
                    b = st.top();
                    st.pop();
                    result = b - a;
                    break;

                case '*':
                    a = st.top();
                    st.pop();
                    b = st.top();
                    st.pop();
                    result = a * b;
                    break;

                case '/':
                    a = st.top();
                    st.pop();
                    b = st.top();
                    st.pop();
                    result = b / a;
                    break;
            }
            st.push(result);
        }
    }

    result = st.top();
    cout << fixed << setprecision(2) << result << endl;

    return 0;
}

