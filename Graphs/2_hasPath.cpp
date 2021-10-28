#include<bits/stdc++.h>
using namespace std;
class Graph {
    int V;
    map<int, list<int>> l;
    public:
    Graph(int V) {
        this->V = V;
    }
    void addEdge(int u, int v, bool bidir = true) {
        l[u].push_back(v);
        if(bidir) {
            l[v].push_back(u);
        }
    }
    bool hasPath(int src, int des) {
        if(src==des) {
            return true;
        }
        map<int,bool> vis;
        for(auto i : l) {
            vis[i.first]=false;
        }
        queue<int> q;
        vis[src]=true;
        q.push(src);
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            for(auto i : l[node]){
                if(i==des){
                    return true;
                }
                if(!vis[i]) {
                    vis[i]=true;
                    q.push(i);
                }
            }
        }
        return false;
    }
   
};
int main() {
    Graph g(5);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(2,7);
    g.addEdge(3,5);
    g.addEdge(7,5);
    g.addEdge(9,10);
    cout<<g.hasPath(1,5);
    return 0;
}