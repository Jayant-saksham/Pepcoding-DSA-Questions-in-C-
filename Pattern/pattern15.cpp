// 		1	
// 	 2	3	2	
// 3	4	5	4	3	
// 	 2	3	2	
// 		1	
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int spaces = n/2;
    int start = 1;
    int nums = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<spaces;j++){
            cout<<"\t";
        }
        int cval = start;

        for(int j=0;j<nums;j++){
            cout<<cval<<"\t";
            if(j<(nums/2)){
                cval++;
            }
            else{
                cval--;
            }
        }
        if(i<n/2){
            spaces--;
            nums += 2;
            start++;
        }
        else{
            spaces++;
            nums -= 2;
            start--;
        }
        cout<<endl;
    }
    return 0;
}