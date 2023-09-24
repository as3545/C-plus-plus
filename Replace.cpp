//Code

#include<iostream>
using namespace std;
string replace(string s, char s1, char s2){
    
    for(int i=0;i<s.length();i++){
        if(s[i]==s1){
            s[i]=s2;
        }
    }
    return s;
}
int  main(){
    string s;
    cin>>s;
    char str1,str2;
    cin>>str1;
    cin>>str2;
    
    cout<<replace(s,str1,str2);
    return 0;
}
