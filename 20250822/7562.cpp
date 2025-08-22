#include<iostream>
#include<queue>
using namespace std;

int steps[301][301];
int dx[8]={2,2,1,1,-1,-1,-2,-2};
int dy[8]={1,-1,2,-2,2,-2,1,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int l;
        cin>>l;
        for(int i=0;i<301;i++){
            for(int j=0;j<301;j++){
                steps[i][j]=-1;
            }
        }
        int sx,sy; // start x,y coordinate
        cin>>sx>>sy;
        int destx,desty;
        cin>>destx>>desty;

        queue <pair<int,int>> q;
        steps[sx][sy]=0;
        q.push({sx,sy});
        while(!q.empty()){
            auto cur=q.front();q.pop();
            for(int i=0;i<8;i++){
                int nx=cur.first+dx[i];
                int ny=cur.second+dy[i];
                if(nx<0 or nx>=l or ny<0 or ny>=l)continue;
                if(steps[nx][ny]!=-1)continue;
                steps[nx][ny]=steps[cur.first][cur.second]+1;
                q.push({nx,ny});
            }
        }
        cout<<steps[destx][desty]<<"\n";
    }
}