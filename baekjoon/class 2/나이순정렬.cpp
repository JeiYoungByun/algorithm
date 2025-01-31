#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 구조체 정의
struct Member {
    int age;
    string name;
};

bool compare(const Member &a, const Member &b) {
    return a.age < b.age;  // 나이를 기준으로 오름차순 정렬
}

int main() {
    int n;
    cin >> n;  // 사람 수 입력

    vector<Member> members(n);

    // 나이와 이름 입력
    for (int i = 0; i < n; ++i) {
        cin >> members[i].age >> members[i].name;
    }

    // 나이를 기준으로 정렬
    sort(members.begin(), members.end(), compare);

    // 결과 출력
    for (const auto &member : members) {
        cout << member.age << " " << member.name << endl;
    }

    return 0;
}