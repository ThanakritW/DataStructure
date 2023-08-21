#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int n,x;
string cmd;

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> cmd;
        if(cmd == "pb"){
            cin >> x;
            v.push_back(x);
        }
        else if(cmd == "sa"){
            sort(v.begin(),v.end());
        }
        else if(cmd == "sd"){
            sort(v.begin(),v.end(),greater<int>());
        }
        else if(cmd == "r"){
            reverse(v.begin(),v.end());
        }
        else{
            cin >> x;
            v.erase(v.begin()+x);
        }
    }
    for(auto e:v){
        cout << e << ' ';
    }
    return 0;
}
