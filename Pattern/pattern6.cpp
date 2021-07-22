// *** **
// **   *
// *     
// **   *
// *** **

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int spaces = 1;
    int stars = n/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<=stars;j++){
            cout<<"*\t";
        }
        for(int j=0;j<spaces;j++){
            cout<<"\t";
        }
        for(int j=0;j<=stars;j++){
            cout<<"*\t";
        }
    
        cout<<endl;
        if(i<(n/2)){
            stars--;
            spaces+=2;

        }
        else{
            stars++;
            spaces -=2;
        }
    }
    return 0;
}