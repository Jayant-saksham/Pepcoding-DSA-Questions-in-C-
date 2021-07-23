// *	*	*	*	*	*	*	
// 	*				*	
// 		*		*	
// 			*	
// 		*	*	*	
// 	*	*	*	*	*	
// *	*	*	*	*	*	*	

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int stars=n;
    int spaces=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<spaces;j++){
            cout<<"\t";
        } 
        for(int j=0;j<stars;j++){
            if(i>0 && i<n/2 && j>0 && j<stars-1){
                cout<<"\t";
            }
            else{
                cout<<"*\t";
            }

        }
         if(i<(n/2)){
            spaces++;
            stars-=2;
        }
        else{
            spaces--;
            stars+=2;
        }
        cout<<endl;
    }
    return 0;
}