#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int A[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    int minr = 0;
    int minc = 0;
    int maxr = n-1;
    int maxc = m-1;
    int count=0;
    int totalelement=n*m;
    while(true) {
        if(count>=totalelement){
            break;
        }
        // Left row
        for(int i=minr, j=minc;i<=maxr && count<totalelement;i++){
            cout<<A[i][j]<<endl;
            count++;
        }
        minc++;
        // Bottom column
        for(int i=maxr,j=minc;j<=maxc && count<totalelement;j++){
            cout<<A[i][j]<<endl;
            count++;
        }
        maxr--;
        // Right row
        for(int i=maxr,j=maxc;i>=minr && count<totalelement;i--){
            cout<<A[i][j]<<endl;
            count++;
        }
        maxc--;
        // TOp column
        for(int i=minr, j=maxc;j>=minc && count<totalelement;j--){
            cout<<A[i][j]<<endl;
            count++;
        }
        minr++;
    }
    return 0;
}