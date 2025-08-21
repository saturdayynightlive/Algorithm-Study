#include<iostream>
using namespace std;
#include<deque>
int main(){
    int n;
    cin >> n;
    int howmuchgo[n];
    for(int i = 0; i < n; i++){
        cin >> howmuchgo[i];
    }
    deque<pair<int,int>> s;
    for(int i = 0; i < n; i++){
        s.push_back({i+1, howmuchgo[i]});
    }
    while(!s.empty()){
        cout << s.front().first << " ";
        
        int nextstep = s.front().second;
        
        s.pop_front();
        
        if(nextstep>0){
            nextstep--;
            while(nextstep--){
                s.push_back(s.front());
                s.pop_front();
            }
        }
        else{
            nextstep = -nextstep;
            while(nextstep--){
                s.push_front(s.back());
                s.pop_back();
            }
        }
    }
}