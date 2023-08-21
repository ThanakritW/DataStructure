#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,m,t;
    cin >> h >> m;
    cin >> t;
    m += t%60;
    if(m >= 60){
        m-=60;
        h++;
    }
    h = (h+t/60)%24;
    printf("%02d %02d",h,m);
    return 0;
}
