#include<iostream>
#include<queue>
using namespace std;

int board[501][501];
int visited[501][501];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>board[i][j];
        }
    }
    int painting=0;
    int mx=0;
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(visited[i][j]!=0 or board[i][j]==0)continue;
            painting++;
            visited[i][j]=1;
            q.push({i,j});
            int area=1;
            while(!q.empty()){
                auto cur=q.front();q.pop();
                for(int i=0;i<4;i++){
                    int nextx=cur.first+dx[i];
                    int nexty=cur.second+dy[i];
                    if(nextx<0 or nextx>=n or nexty<0 or nexty>=m)continue;
                    if(board[nextx][nexty]==0 or visited[nextx][nexty]!=0)continue;
                    visited[nextx][nexty]=1;
                    q.push({nextx,nexty});
                    area++;
                }

            }
            mx=max(area,mx);
        }
    }
    cout<<painting<<endl<<mx;

}