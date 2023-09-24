//Code

#include<iostream>
using namespace std;
int reverse(int n){
    int reversed=0;
    while(n!=0){
        int lastdigit=n%10;
        reversed=reversed*10+lastdigit;
        n/=10;
    }
    return reversed;
}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n);
    return 0;
}
