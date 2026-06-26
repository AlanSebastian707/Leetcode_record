int maxArea(int* height, int n) {
    int maxspace=0,l=0,r=n-1;
    while(l<r){
        int area=((height[l]<height[r])?height[l]:height[r])*(r-l);
        if(maxspace<area)maxspace=area;
        if(height[l]<height[r])
           l++;
        else
           r-- ;  
    }
    return maxspace;
}