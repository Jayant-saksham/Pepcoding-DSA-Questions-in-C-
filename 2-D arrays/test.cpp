#include <bits/stdc++.h>
using namespace std;

int sumOfBothDiagonal(int N){
    //In the Given Data, "N" is the size of mattrix, Return sum of both the diagonal.
    int sum=0;
    int A[N][N];
    int start = N*N;
    int minr = 0;
    int minc = 0;
    int maxr = N-1;
    int maxc = N-1;
    int count = 0;
    int totalElements = N*N;
    while(true){
        if(count>=totalElements){
            break;
        }
        for(int i=minr,j=maxc;j>=minc && count<totalElements;j--){
            A[i][j] = start;
            start--;
            count++;
        }
        minr++;
        for(int i=minr,j=minc;i<=maxr && count<totalElements;i++){
            A[i][j] = start;
            start--;
            count++;
        }
        minc++;
        for(int i=maxr,j=minc;j<=maxc && count<totalElements;j++){
            A[i][j] = start;
            start--;
            count++;
        }
        maxr--;
        for(int i=maxr,j=maxc;i>=minr && count<totalElements;i++){
            A[i][j] = start;
            start--;
            count++;
        }
        maxc--;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j || i+j == N-1){
                sum += A[i][j];
            }
        }
    }
    
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<sumOfBothDiagonal(n);
    return 0;
}