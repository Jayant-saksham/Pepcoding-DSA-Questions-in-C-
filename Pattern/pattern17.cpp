// 		*	
// 		*	*	
// *	*	*	*	*	
// 		*	*	
// 		*	


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int stars = 1;
    for(int i=0;i<n;i++){
        if(i!=(n/2)){
            for(int j=0;j<(n/2);j++){
                cout<<"\t";
            }
        }
        else{
            for(int j=0;j<(n/2);j++){
                cout<<"*\t";
            }
        }
        for(int j=0;j<stars;j++){
            cout<<"*\t";
        }
        if(i<(n/2)){
            stars++;
        }
        else{
            stars--;
        }
        cout<<endl;
    }
    return 0;
}