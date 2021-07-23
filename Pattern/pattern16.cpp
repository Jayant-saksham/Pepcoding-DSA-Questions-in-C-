// 1												1	
// 1	2										2	1	
// 1	2	3								3	2	1	
// 1	2	3	4						4	3	2	1	
// 1	2	3	4	5				5	4	3	2	1	
// 1	2	3	4	5	6		6	5	4	3	2	1	
// 1	2	3	4	5	6	7	6	5	4	3	2	1	

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rowMax = 2*n-1;
    int spaces = 2*n-3;
    int stars = 1;
    for(int i=0;i<n;i++,spaces-=2, stars++){
        int x=1;
        for(int j=0;j<stars;j++, x++){
            cout<<x<<"\t";
        }   
        for(int j=0;j<spaces;j++){
            cout<<"\t";
        }
        x--;
        if(i==n-1){
            stars--;
            x--;
        }
        for(int j=0;j<stars;j++,x--){
            cout<<x<<"\t";
        }
        cout<<endl;
    }
    return 0;
}