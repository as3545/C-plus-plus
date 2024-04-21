int i,j;
    for(i=0;i<m;i++){
        bool found=false;
        for(j=0;j<n;j++){
            if(a2[i]==a1[j]){
                found=true;
                a1[j]=-1;
                break;
            }
        }
        if(!found){
            return "No";
        }
    }
    return "Yes";
}
