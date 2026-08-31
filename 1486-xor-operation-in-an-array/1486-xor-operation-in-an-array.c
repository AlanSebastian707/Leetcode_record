int xorOperation(int n, int start) {
    int nums[n],xor_all=0;

    for(int i=0;i<n;i++){
         nums[i]=start+2*i;
         xor_all^=nums[i];
    }
    return xor_all;
    
}