#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string s;
    std::getline(std::cin, s);

    std::vector<int> A(s.size(),0);

    for(int i=0; i<s.size(); i++){
        A[i] = std::stoi(s.substr(i, 1));
    }

    for(int i=0; i<A.size(); i++){
        int max = i;
        for(int j=i+1;j<A.size();j++){
            if(A[j]>A[max]) max = j;

            if(A[i]<A[max]){
                int temp = A[i];
                A[i] = A[max];
                A[max] = temp;
            }
        }
    }

    for(int i=0; i<A.size(); i++){
        std::cout<<A[i];
    }
    
    std::cout<<std::endl;

    return 0;
}