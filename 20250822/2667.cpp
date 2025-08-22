#include<iostream>
#include<queue>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>

int map[26][26];
int visited[26][26];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int main(){
    int n;
    cin>>n;
    string input;
    for(int i=0;i<n;i++){
        
        cin>>input;
        for(int j=0;j<n;j++){
            map[i][j]=input[j]-'0';
        }
    }
    int danji=0;
    vector<int> areas;
    

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(map[i][j]==1 and visited[i][j]==0){
                int area=0;
                danji++;
                area++;
                visited[i][j]=1;
                queue<pair<int,int>> q;
                q.push({i,j});
                while(!q.empty()){
                    auto cur=q.front();q.pop();
                    for(int i=0;i<4;i++){
                        int nx=cur.first+dx[i];
                        int ny=cur.second+dy[i];
                        if(nx<0 or nx>=n or ny<0 or ny>=n)continue;
                        if(visited[nx][ny]==1 or map[nx][ny]==0)continue;
                        visited[nx][ny]=1;
                        area++;
                        q.push({nx,ny});
                    }
                }
                areas.push_back(area);
                
            }

            
        }
    }

    sort(areas.begin(),areas.end());
    cout<<danji<<endl;
    for(auto a: areas){
        cout<<a<<endl;
    }
    

}