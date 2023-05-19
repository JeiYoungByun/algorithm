#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n;
    
    std::cin>>n;

    int* starttime = new int[n];
    int* endtime = new int[n];

    for(int i=0; i<n; i++){
        std::cin>>starttime[i]>>endtime[i];
    }

    int early = endtime[0];

    for(int i=1; i<n; i++){
        if(early>endtime[i]){
            early = endtime[i];
        }
    }

    int sol = 1;

    bool a = false;

    while(!a){
        for(int i=0; i<n; i++){
             if(early<endtime[i]){
                a = true;
             }
             else{
                a = false;
             }
        }

        if(!a){
            break;
        }

        else{
            std::vector<int> v;
            for(int i=0; i<n; i++){
                 if(early<=starttime[i]){
                    v.push_back(endtime[i]);
                }
            }
            early = *min_element(v.begin(), v.end());
            sol += 1;
            a = false;
        }
    }
    
    std::cout<<sol<<std::endl;


    delete[] starttime, endtime;

    return 0;
}