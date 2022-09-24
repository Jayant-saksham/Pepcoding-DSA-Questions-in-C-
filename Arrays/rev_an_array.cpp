#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    // int arr2[n];
    int val=0;
    for(int i=0,j=n-1;i<n,j>=0;i++,j--){
        if(i>=j){
            break;
        }
        val=arr[i];
        arr[i]=arr[j];
        arr[j]=val;
    }
    
}

void display(int arr[], int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>i[arr];
    }
    
    //  int arr2[n];
    //  for(int i=n-1,j=0;i>=0,j<n;i--,j++){
         
    //      arr2[j]=arr[i];
    //  }
    //  for(int i=0;i<n;i++){
         
    //      cout<<arr2[i]<<" ";
    //  }
     reverse(arr,n);
     display(arr,n);
}
