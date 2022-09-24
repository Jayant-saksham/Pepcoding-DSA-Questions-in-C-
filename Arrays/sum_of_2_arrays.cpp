#include<iostream>
using namespace std;
//new
int main(){
    int n1, n2;
    cin>>n1;
    int* a1 = new int[n1];
    for(int i = 0 ; i < n1; i++){
        cin>>a1[i];
    }
    
    cin>>n2;
    int* a2 = new int[n2];
    for(int i = 0 ; i < n2; i++){
        cin>>a2[i];
        
    }
    int carry=0;
    int len=n1>n2 ?n1:n2;
     int* a3 = new int[len];
    if(n1>=n2){
        for(int i=n1-1,j=n2-1;i>=0;i--,j--){
             if(j<0){
                a3[i]=a1[i]+carry;
            }
            else{
                a3[i]=a1[i]+a2[j]+carry;
                
            }
                carry=a3[i]/10;
                a3[i]=a3[i]%10;
                // cout<<"val is a3 is"<<a3[i]<<endl;
        }
    }
    else{
        for(int i=n1-1,j=n2-1;j>=0;i--,j--){
             if(j<0){
                a3[j]=a2[j]+carry;
            }
            else{a3[j]=a1[i]+a2[j]+carry;}
                carry=a3[j]/10;
                a3[j]=a3[j]%10;
            }
           
        }
    if(carry>0){
                 cout<<carry<<endl;
             }
         for(int k=0;k<len;k++){
            cout<<a3[k]<<endl;
        }
    
}
