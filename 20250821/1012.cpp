#include<iostream>
#include<queue>

using namespace std;

int board[51][51];
int visited[51][51];

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int main(){

    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<51;i++){
            for(int j=0;j<51;j++){
                board[i][j]=0;
                visited[i][j]=0;
            }
        }
        int n,m,k;
        cin>>m>>n>>k;
        while(k--){
            int x,y;
            cin>>x>>y;
            board[y][x]=1;
        }
        int area=0;
        queue <pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j]==0 and board[i][j]==1){
                    area++;
                    q.push({i,j});
                    visited[i][j]=1;

                    while(!q.empty()){
                        auto cur=q.front();q.pop();
                        for(int i=0;i<4;i++){
                            int nx=cur.first+dx[i];
                            int ny=cur.second+dy[i];
                            if(nx<0 or nx>=n or ny<0 or ny>=m)continue;
                            if(board[nx][ny]==0 or visited[nx][ny]==1)continue;
                            visited[nx][ny]=1;
                            q.push({nx,ny});
                        }
                    }
                }

            }
        }

        cout<<area<<"\n";
    }
}