 int j=0;
        int sum=0;
        
        for(int i=0;i<N;i++){
            sum+=Grid[i][j];
            j++;
        }
        
        int n=N-1;
        int sum1=0;
        for(int i=0;i<N;i++){
            sum1+=Grid[i][n];
            n--;
        }
        
        return abs(sum-sum1);
        
    }
