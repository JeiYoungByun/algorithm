#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ����ü ����
struct Member {
    int age;
    string name;
};

bool compare(const Member &a, const Member &b) {
    return a.age < b.age;  // ���̸� �������� �������� ����
}

int main() {
    int n;
    cin >> n;  // ��� �� �Է�

    vector<Member> members(n);

    // ���̿� �̸� �Է�
    for (int i = 0; i < n; ++i) {
        cin >> members[i].age >> members[i].name;
    }

    // ���̸� �������� ����
    sort(members.begin(), members.end(), compare);

    // ��� ���
    for (const auto &member : members) {
        cout << member.age << " " << member.name << endl;
    }

    return 0;
}