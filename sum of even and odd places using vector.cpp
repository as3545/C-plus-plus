//Code

#include<bits/stdc++.h>
using namespace std;
int smallsum(int *arr, int n){
    if(n<=3){
        return 0;
    }
    vector<int>arrE, arrO;
    for(int i=0;i<n;i++){
        if(i%2==0){
            arrE.push_back(arr[i]);
        }
        else {
            arrO.push_back(arr[i]);
        }
    }
    sort(arrE.begin(),arrE.begin());
    sort(arrO.begin(),arrO.end());
    return arrE[1]+arrO[1];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<smallsum(arr,n);
    return 0;
}
