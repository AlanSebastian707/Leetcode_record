int maximumWealth(int** accounts, int M, int* N) {
    int max=0;
    for (int i=0;i<M;i++){
        int sum=0;
        for(int j=0;j<*N;j++){
            sum+=accounts[i][j];
        }
        if(max<sum){max=sum;}
    }
    return max;
}