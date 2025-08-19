#include<iostream>
using namespace std;
#include<vector>

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i] = i+1;
    }
    int count=0;

    cout << "<";
    while(v.size() > 0){
        count++;
        if(count == k){
            if (v.size()==1){
                cout << v[0];
            }
            else cout << v[0]<<", ";
            v.erase(v.begin());
            count = 0;
        }
        else{
            v.push_back(v[0]);
            v.erase(v.begin());
        }

    }
    cout << ">" << endl;
}
