#include<bits/stdc++.h>
using namespace std;
int find(int arr[], int length, int num, int diff){
    int count=0;
    if(arr=nullptr){
        return -1;
    }
    
    for(int i=0;i<length;i++){
        if(abs(arr[i]-num<=diff)){
            count++;
        }
    } return count;
}
int main(){
    int num;
    int diff;
    int length=sizeof(arr)/sizeof(arr[0]);
    int arr[length];
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }
    int r=find(arr,length,num, diff);
    if(r==-1){
        cout<<"No"<<endl;
    }
    else {
        cout<<"Yes"<<endl;
    }
    return 0;
}
