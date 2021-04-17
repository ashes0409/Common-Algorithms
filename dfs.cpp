#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <vector <int> >g;
stack <int> s;
void dfs(int i)
{
    s.push_back(i);
    //cout<<i<<"\n";
    for(int j=0;j<g[i].size();j++)
    {
        if(visit[g[i][j]]==0)
        {
            visit[g[i][j]]=1;
            dfs(g[i][j],visit);
        }
    }

    return ;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,i,a,b;
    cin>>n>>m;
    g.resize(n+1);
    return 0;
}
