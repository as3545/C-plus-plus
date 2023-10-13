#include<iostream>
using namespace std;
void sum(int a[], int b[], int result[]){
    int ascore=0;
    int bscore=0;
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            a++;
        }
        else if(a[i]<b[i]){
            b++;
        }
    } result[0]=ascore;
    result[1]=bscore;
}
int main(){
    int a[]={5,6,7};
    int b[]={3,6,10};
    int result[2];
    sum(a,b,result);
    for(int i=0;i<2;i++){
        cout<<result[i]<<" ";
    }
        return 0;
}
