//Code

#include<iostream>
using namespace std;
int maxmin(int ar[], int n){
    int max=-1,  min=-1;
    for(int i=0;i<n;i++){
        if(ar[i]>max){
            max=ar[i];
            min=i;
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    maxmin(ar, n);
    return 0;
}

/*

3
1 5 3
5
1

  */
