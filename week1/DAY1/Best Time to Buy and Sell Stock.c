int maxProfit(int* prices, int pricesSize) {
    int min=prices[0];
    int profit=0;
    int current=0;
    for(int i=0;i<pricesSize;i++){
        current=prices[i]-min;
        profit=(current>profit)?current:profit;
        min=(prices[i]<min)?prices[i]:min;

    }
    return profit;
}