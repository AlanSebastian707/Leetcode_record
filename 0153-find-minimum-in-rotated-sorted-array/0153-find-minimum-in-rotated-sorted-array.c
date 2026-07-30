int findMin(int* nums, int n) {
    int l=0,r=n-1;
    int m;
    while(l<r){
        m=(l+r)/2;
        if( nums[m]>nums[r])
             l=m+1;
        else
            r=m;           
    }
    return nums[l];
    
    
}