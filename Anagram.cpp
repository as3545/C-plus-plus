//Codd

#include<bits/stdc++.h>
using namespace std;
int ana(const char *str1, const char *str2){
    int count[256]={0};
    if(strlen(str1)!=strlen(str2)){
        return 0;
    }
    for(int i=0;str1[i]!='\0';i++){
        count[str1[i]]++;
    }
    for(int i=0;str2[i]!='\0';i++){
        count[str2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0){
            return 0;
        }
    } return 1;
}
int main(){
    char str1[100], str2[100];
    cin>>str1>>str2;
    if(ana(str1,str2)){
        cout<<"Anagram"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
    return 0;
}

/*
Silent
lentsi
Anagram
*/
