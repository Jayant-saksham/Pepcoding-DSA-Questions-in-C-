#include<bits/stdc++.h>
using namespace std;
class Pair {
    public:
    int src;
    string path;
    int weightl
};
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
    void shortestPath(int src) {
        priority_queue<Pair> q;
        q.push({src, to_string(src) + "", 0});
        vector<bool> vis(V, false);
        while(!q.empty()) {
            Pair element = q.top();
            q.pop();
            if(vis[element.src]) {
                continue;
            }
            
        }
    }

};
int main(){
    
    return 0;
}