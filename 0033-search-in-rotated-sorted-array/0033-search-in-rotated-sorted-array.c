int search(int* nums, int n, int target) {
    int l=0,r=n-1,m;
    while(l<=r){
       m=(l+r)/2;
       if(nums[m]==target)return m;
       if(nums[l]<=nums[m]){
          if(target>nums[m]||target<nums[l])l=m+1;
          else r=m-1;
       }
       else{
          if(target<nums[m]||target>nums[r])r=m-1;
          else l=m+1;
       }  
       }   
    return -1;
}