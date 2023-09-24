//Code

#include<bits/stdc++.h>
using namespace std;
string replace(string s,char s1,char s2){
    for(int i=0;i<s.length();i++){
        if(s[i]==s1){
            s[i]=s2;
        }
    } return s;
}
int main(){
    string s;
    cin>>s;
    char s1, s2;
    cin>>s1;
    cin>>s2;
    cout<<replace(s,s1,s2);
    return 0;
}
