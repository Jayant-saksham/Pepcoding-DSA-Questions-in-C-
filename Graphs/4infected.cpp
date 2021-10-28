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
    int infected(int src, int t) {
        queue<pair<int,int>>q;
        vector<int> vis(V, -1);
        int count = 0;
        q.push(make_pair(src, 1));
        while(!q.empty()) {
            pair<int,int> p = q.front();
            q.pop();
            if(vis[p.first]!=-1) {
                continue;
            }
            vis[p.first] = p.second;
            if(p.second > t) {
                break;
            }
            count++;
            for(auto i : l[p.first]) {
                int nei = i;
                if(vis[nei]==-1) {
                    q.push(make_pair(nei, p.second+1));
                }
            }
        }
        return count;
    }
   
};
int main() {
    
    return 0;
}