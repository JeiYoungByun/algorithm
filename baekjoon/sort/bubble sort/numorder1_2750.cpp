#include <iostream>
#include <vector>
#include <algorithm>

void bsort(int);
std::vector<int> srt;

int main(){
    int n, k;
    std::cin>>n;

    for(int i=0; i<n; i++){
        std::cin>>k;
        srt.push_back(k);
    }

    for (int i=n; i>0; i--) {
        bsort(i);
    }
    for (int i=0; i<n; i++) {
        std::cout<<srt[i]<<std::endl;
    }

    return 0;
}

void bsort(int num){
    for(int i=0; i<num; i++){
        for(int j=i+1; j<num; j++){
            if (srt[i]>srt[j]) std::swap(srt[i], srt[j]);
        }
    }
}