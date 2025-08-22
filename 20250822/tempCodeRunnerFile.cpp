#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int board[101][101];
int visited[101][101];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n,k;
    vector<int> areas;
    cin>>m>>n>>k;
    for(int i=0;i<101;i++){
        for(int j=0;j<101;j++){
            board[i][j]=1;
        }
    }
    for(int i=0;i<k;i++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        for(int j=y1;j<y2;j++){
            for(int k=x1;k<x2;k++){
                board[j][k]=0;
            }
        }
    }
    
    int area=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==1 and visited[i][j]==0){
                area++;
                visited[i][j]=1;
                queue<pair<int,int>> q;
                int current_area=1;
                q.push({i,j});
                while(!q.empty()){
                    auto cur=q.front(); q.pop();
                    for(int i=0;i<4;i++){
                        int nx=cur.first+dx[i];
                        int ny=cur.second+dy[i];
                        if(nx<0 or nx>=m or ny<0 or ny>=n)continue;
                        if(board[nx][ny]==0 or visited[nx][ny]==1)continue;
                        visited[nx][ny]=1;
                        q.push({nx,ny});
                        current_area++;
                        
                    }
                }
                areas.push_back(current_area);
            }
        }
    }
    sort(areas.begin(),areas.end());
    cout<<area<<endl;
    for (int size : areas) {
        cout << size << " ";
    }
    
}