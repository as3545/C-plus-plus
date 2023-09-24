//Code

#include<bits/stdc++.h>
using namespace std;
int check(char* str){
    int len=strlen(str);
    int ans=str[0]-'0';
    for(int i=0;i<len;i+=2){
        int j=i+1;
    if(str[i]=='A'){
        ans=ans & (str[j]-'0');
    }
    else if(str[i]=='B'){
        ans=ans | str[j]-'0';
    }
    else if(str[i]=='C'){
        ans=ans ^ str[j]-'0';
    }
}   
return ans;
}
int main(){
    char pass[100];
    cin>>pass;
    cout<<check(pass);
    return 0;
}
