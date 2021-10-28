#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    int m1;
    cin>>m1;
    int A[n1][m1];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cin>>A[i][j];
        }
    }
    int n2;
    cin>>n2;
    int m2;
    cin>>m2;
    int B[n2][m2];
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
            cin>>B[i][j];
        }
    }
    
    if(m1==n2) {
        int C[n1][m2];
        for(int i=0;i<n1;i++) {
            for(int j=0;j<m2;j++) {
                C[i][j]=0;
            }
        }
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                for(int k=0;k<m1;k++){
                    C[i][j] += A[i][k]*B[k][j];
                }
            }
        }
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++) {
                cout<<C[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Invalid input"<<endl;
    }
    return 0;
}