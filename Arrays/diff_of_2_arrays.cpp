#include<iostream>
using namespace std;

int main() {
  int n1, n2;
  cin >> n1;
  int* a1 = new int[n1];
  for (int i = 0 ; i < n1; i++) {
    cin >> a1[i];
  }
  cin >> n2;
  int* a2 = new int[n2];
  for (int i = 0 ; i < n2; i++) {
    cin >> a2[i];
  }
int* a3= new int [n2];
int carry=0;
for(int i=n1-1 ,j=n2-1;j>=0;j--,i--){
    int aval=i>=0?a1[i]:0;
    if(a2[j]-carry<aval){
        // cout<<a2[j]-carry<<" "<<aval<<endl;
    a3[j]=a2[j]-aval+ 10 - carry;
    carry=1;
    
    }
    else{
        a3[j]=a2[j]-aval-carry;
        carry=0;
    }
    
    
}
int id=0;
while(id<n2){
    if(a3[id]==0){
        id++;
    }
    else{
        break;
    }
}
    for(int i=id;i<n2;i++){
        cout<<a3[i]<<endl;    }
  //write your code here

}
