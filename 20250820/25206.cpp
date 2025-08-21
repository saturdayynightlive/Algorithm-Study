#include<iostream>
using namespace std;
#include<string>

int main() {
    char name[51];
    float weight;
    string grade;
    float totalgrade=0.0;
    float totalweight=0.0;
    for(int i=0;i<20;i++){
        cin >> name >> weight >> grade;
        if(grade[0]=='P'){
            continue;
        }
        if(grade[0]=='F'){
            totalgrade += 0.0 * weight;
            totalweight += weight;
            continue;
        }
        if(grade[0]=='A'){
            totalgrade += 4.0 * weight;
            totalweight += weight;
        }
        else if(grade[0]=='B'){
            totalgrade += 3.0 * weight;
            totalweight += weight;
        }
        else if(grade[0]=='C'){
            totalgrade += 2.0 * weight;
            totalweight += weight;
        }
        else if(grade[0]=='D'){
            totalgrade += 1.0 * weight;
            totalweight += weight;
        }
        if(grade[1]=='+'){
            totalgrade += 0.5 * weight;
        }



    }
    cout << totalgrade / totalweight << endl;
    return 0;
}
