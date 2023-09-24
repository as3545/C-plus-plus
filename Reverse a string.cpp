//Code

#include<bits/stdc++.h>
using namespace std;
string reverse(string s){
    int left=0;
    int right=s.length()-1;
    while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
    return s;
}
int main(){
    string s;
    cin>>s;
    cout<<reverse(s);
    return 0;
}
