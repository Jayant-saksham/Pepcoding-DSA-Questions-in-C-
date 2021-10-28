#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    map<int, list<int>> l;
    public:
    Graph(int V) {
        this->V = V;
    }
    void addEdge(int u, int v, bool bidir = true){
        l[u].push_back(v);
        if(bidir){
            l[v].push_back(u);
        }
    }
    void BFS(int src) {
        map<int, bool> vis;
        for(auto i : l){
            vis[i.first]=false;
        }
        queue<int> q;
        q.push(src);
        vis[src]=true;
        while(!q.empty()){
            int node = q.front();
            cout<<node<<" ";
            q.pop();
            for(auto i : l[node]) {
                if(!vis[i]){
                    q.push(i);
                    vis[i]=true;
                }
            }
        }
    }
};
int main(){
    Graph g(5);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(2,7);
    g.addEdge(3,5);
    g.addEdge(7,5);
    g.BFS(2);
    return 0;
}