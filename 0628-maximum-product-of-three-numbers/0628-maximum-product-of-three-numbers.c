void sort(int nums[],int n){
    for(int i=0;i<=n-1;i++){
        for( int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
           
    }
    
}
int maximumProduct(int* nums, int n) {
    int max=1;
    sort(nums,n);
    int a=nums[n-1]*nums[n-2]*nums[n-3];
    int b=nums[0]*nums[1]*nums[n-1];
    return a>b?a:b;
    
}