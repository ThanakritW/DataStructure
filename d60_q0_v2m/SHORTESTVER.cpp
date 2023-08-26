#include <bits/stdc++.h>
#define w vector<pair<int,string>>
#define j map<int,string>
#define f for(int i=0;i<n;i++)
using namespace std;j vector_to_map(w::iterator s,w::iterator e){j m(s,e);return m;}int main(){int n,a,b;cin>>n>>a>>b;w v(n);f cin>>v[i].first;f cin>>v[i].second;j m;m=vector_to_map(v.begin()+a,v.begin()+b);cout<<"-------- result -----------"<<endl;cout<<"Size of map = " <<m.size()<<endl;for(auto &x:m)cout<<"("<<x.first<<","<<x.second<<")"<<endl;}
