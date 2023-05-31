#include <iostream>
#include <vector>
#include <queue>

std::vector<std::vector<int>> v(50, std::vector<int>(50)); // 50x50 행렬 생성
bool check[50][50]; // 방문했는지 check
int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 }; // dx와 dy의 순서쌍 형식으로 8방향 모두의 node를 탐색(중요)
int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int NumofIsl = 0;
int w, h;

void bfs(int, int);
bool terminate(int, int);

int main() {
    int a;
    bool b = true;

    while(b){
        std::cin>>w>>h;
        b = terminate(w, h);
       
        if(!b) break;

        // Reset the check array and NumofIsl for each test case
        std::fill(&check[0][0], &check[0][0] + sizeof(check), false);
        NumofIsl = 0;

        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                std::cin>>a;
                v[i][j] = a;
            }
        }

        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                if(check[i][j] == false && v[i][j]==1){
                    bfs(i, j);
                    NumofIsl++;
                }
            }
        }
        std::cout<<NumofIsl<<std::endl;
    }

    return 0;
}

bool terminate(int a, int b){
    if(a==0 && b==0) return false;
    else return true;
}

void bfs(int r, int c){
    std::queue<std::pair<int, int>> q;
    check[r][c] = true;
    q.push(std::make_pair(r, c));

    while(!q.empty()){
        std::pair<int, int> current = q.front();
        q.pop();
        
        int cx = current.first;
        int cy = current.second;

        for(int i=0; i<8; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            // Check if nx, ny is in the valid range before accessing v[nx][ny]
            if(nx >= 0 && nx < h && ny >= 0 && ny < w){
                if(nx >= 0 && nx < h && ny >= 0 && ny < w){
                    if(check[nx][ny] == false && v[nx][ny] == 1){
                    check[nx][ny] = true;
                    q.push(std::make_pair(nx, ny));    
                    }
                }
            }
        }
    }
}
