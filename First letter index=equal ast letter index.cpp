for(int i=0;i<s.length();i++){
if(s[i]>='a' and s[i]<='z'){
s[i]='z'-s[i]+'a';
}
else if(s[i]>='A' and s[i]<='Z'){
s[i]='Z'-s[i]+'A';
} return s;
}
