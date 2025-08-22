#include<iostream>
#include<queue>
using namespace std;
#include<vector>

int step[1000001];


int main(){
    int F,S,G,U,D;

    cin>>F>>S>>G>>U>>D;
    for(int i=1;i<=F;i++){
        step[i]=-1;
    }
    queue<int>q;
    vector<int> dy(2);
    if(U!=0) dy.push_back(U);
    if(D!=0) dy.push_back(-D);
    step[S]=0;
    q.push(S);
    while(!q.empty()){
        auto cur=q.front();q.pop();
        for(int i=0;i<dy.size();i++){

            int ny=cur+dy[i];
            if(ny<1 or ny>F)continue;
            if(step[ny]!=-1)continue;
            step[ny]=step[cur]+1;
            q.push(ny);
            
        }
    }
    if(step[G]==-1){
        cout<<"use the stairs"<<endl;

    }
    else{
        cout<<step[G]<<endl;

    }

    return 0;
}
