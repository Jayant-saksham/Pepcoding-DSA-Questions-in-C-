#include<bits/stdc++.h>
using namespace std;
int vertArr[20][20];
void addEdge(int u, int v){
    vertArr[u][v]=1;
    vertArr[v][u]=1;
}
void display(int v){
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<vertArr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int v = 6;    
    addEdge(0,4);
    addEdge(0,3);
    addEdge(1,2);
    addEdge(1,4);
    addEdge(1,5);
    addEdge(2,3);
    addEdge(2,5);
    addEdge(5,3);
    addEdge(5,4);
    display(v);
    return 0;
}