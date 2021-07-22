//   *
//  * *
// *   *
//  * *
//   *

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int outerSpace = n/2;
    int innerSpace = -1;
    for(int i=0;i<n;i++){
        for(int j=0;j<outerSpace;j++){
            cout<<"\t";
        }
        cout<<"*\t";
        for(int j=0;j<innerSpace;j++){
            cout<<"\t";
        }
        if(i!=0 && i!=n-1){
            cout<<"*\t";
        }
    
        if(i<n/2){
            outerSpace--;
            innerSpace += 2;
        }
        else{
            outerSpace++;
            innerSpace -= 2;

        }
        cout<<endl;
    }
    return 0;
}