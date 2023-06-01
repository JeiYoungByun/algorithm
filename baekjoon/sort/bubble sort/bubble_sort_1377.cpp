#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    
    std::ios_base::sync_with_stdio(false); // 이 코드는 C++의 std::cin / std::cout과 C의 scanf / printf 간의 동기화를 끕니다.(속도 향상)
    std::cin.tie(NULL); // cin과 cout의 바인딩을 끊어서 입출력 속도 향상

    int N;
    std::cin>>N; 
    std::vector<std::pair<int,int>> A(N);

    for(int i=0; i<N; i++){
        std::cin>>A[i].first;
        A[i].second = i;
    }
    
    std::sort(A.begin(), A.end());

    int max = 0;

    for(int i=0; i<N; i++){
        if(A[i].second-i > max) max = A[i].second - i;
    }

    std::cout<<max+1<<std::endl;

    return 0;
}