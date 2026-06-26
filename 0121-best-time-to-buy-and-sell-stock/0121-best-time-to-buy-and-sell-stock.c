int maxProfit(int* prices, int pricesSize) {
    int maxprofit=0;
    int min=prices[0];
    for(int i=1;i<pricesSize;i++){
            if(prices[i]<min)min=prices[i];
            else if(maxprofit<prices[i]-min)
              maxprofit=prices[i]-min;
        }  
    return maxprofit;
}
    

