#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>>x[100005];
long long int dis[100005];

void dijkstra(int src)
{
    priority_queue<pair<long long int, int>>pq;
    for(int i=0; i<100005;i++) dis[i]=1e18;
    dis[src]=0;
    pq.push({-dis[src], src});
    while(pq.size())
    {
        int cn = pq.top().second;
        int cd = -pq.top().first;
        pq.pop();
        for(auto to: x[cn])
        {
            int cc = cd + to.second;
            int node = to.first;
            if(cc<dis[node])
            {
                dis[node]=cc;
                pq.push({-cc, node});
            }
        }
    }
}
void clear()
{
    for(int i=0;i<100005;i++)
        x[i].clear();
    
}
int main(int c, char* v[])
{
    int t;
    cin>>t;
    for(int i=1;i<=t; i++)
    {
        clear();
        int node, edge, s, e;
        cin>>node>>edge>>s>>e;
        while(edge--)
        {
            int u, v, cost;
            cin>>u>>v>>cost;
            x[u].push_back({v,cost});
            x[v].push_back({u,cost});
        }
        dijkstra(s);
        cout<<"Case #"<<i<<": ";
        if(dis[e]==1e18)
        {
            cout<<"unreachable\n";
        }
        else
        {
            cout<<dis[e]<<endl;
        }
    }
}