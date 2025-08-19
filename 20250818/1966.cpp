#include<iostream>
using namespace std;
#include<vector>
int main(){
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        int n, m;
        int count=0;
        bool jack=false; //제껴짐
        cin >> n >> m;
        vector<int> v(n);
        for(int j = 0; j < v.size(); j++){
            cin >> v[j];
        }
        while(v.size() > 0){
            for(int j = 1; j < v.size(); j++){
                if(v[0]<v[j]){
                    v.push_back(v[0]);
                    v.erase(v.begin());
                    
                    jack=true;
                    if(m==0){
                        m=v.size()-1;
                    }
                    else{
                        m--;
                        
                    }
                    break;

                }
            }
            if(jack==false){
                v.erase(v.begin());
                
                count++;
                if(m==0){
                    cout<<count<<endl;
                    break;
                }
                else m--;

            }
            jack=false;
        }
        
    }
    
}