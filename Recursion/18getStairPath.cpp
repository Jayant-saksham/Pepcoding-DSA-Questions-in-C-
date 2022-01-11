#include<bits/stdc++.h>
using namespace std;
vector<string> getStairPath(int n){
    if(n==0){
        vector<string> base;
        base.push_back("");
        return base;
    }
    else if(n<0){
        vector<string> base;
        return base;
    }
    vector<string> path1 = getStairPath(n-1);
    vector<string> path2 = getStairPath(n-2);
    vector<string> path3 = getStairPath(n-3);
    vector<string> paths;
    for(string path : path1){
        paths.push_back("1"+path);
    }
    for(string path : path2){
        paths.push_back("2"+path);
    }
    for(string path : path3){
        paths.push_back("3"+path);
    }
    return paths;

}
int main(){
    int n;
    cin>>n;
    vector<string>v = getStairPath(n);
    for(string i : v){
        cout<<i<<endl;
    }
    return 0;
}