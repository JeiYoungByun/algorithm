#include <iostream>
#include <vector>
#include <queue>

std::vector<std::vector<int>> v(50, std::vector<int>(50)); // 50x50 행렬 생성
bool check[50][50]; // 방문했는지 check
int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 }; // dx와 dy의 순서쌍 형식으로 8방향 모두의 node를 탐색(중요)
int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int NumofIsl = 0;
int w, h; //지도의 너비와 높이 입력받는값

void bfs(int, int); 
bool terminate(int, int);

int main() {
    int a;
    bool b = true;

    while(b){
        std::cin>>w>>h;
        b = terminate(w, h); // 0과 0을 입력받으면 프로그램을 종료한다
       
        if(!b) break;

        // Reset the check array and NumofIsl for each test case
        std::fill(&check[0][0], &check[0][0] + sizeof(check), false);
        NumofIsl = 0;

        for(int i=0; i<h; i++){     // 사용자로부터 1이나 0을 입력받아서 지도를 그림
            for(int j=0; j<w; j++){
                std::cin>>a;
                v[i][j] = a;
            }
        }

        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                // 노드에 이미 방문했는지와 노드값이 1인지를 체크하고 bfs함수 실행
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
    std::queue<std::pair<int, int>> q; // int, int의 pair로 구성된 큐 생성
    check[r][c] = true;
    q.push(std::make_pair(r, c)); //r, c로 구성된 pair을 만들고 큐에 push

    while(!q.empty()){
        std::pair<int, int> current = q.front(); //큐에서 front값 꺼내고 pop
        q.pop();
        
        int cx = current.first;  //pair에서 값을 꺼내서 cx,cy변수에 저장
        int cy = current.second;

        for(int i=0; i<8; i++){
            int nx = cx + dx[i]; //8방향의 node들을 check
            int ny = cy + dy[i];

            // Check if nx, ny is in the valid range before accessing v[nx][ny]
            
            if(nx >= 0 && nx < h && ny >= 0 && ny < w){
                if(check[nx][ny] == false && v[nx][ny] == 1){ // 이미 체크한 노드인지와 노드 값이 1인지를 검토
                    check[nx][ny] = true; //체크 표시를 하고 pair생성해서 큐에 푸시
                    q.push(std::make_pair(nx, ny));    
                }
            }
            
        }
    }
}
