int maximumProfit(vector<int> &prices) {
    // code here
    int maxEle = 0, maxProfit = 0;
    for(int i=prices.size(); i>=0; i--) {
        maxEle = max(maxEle,prices[i]);
        maxProfit = max(maxProfit,maxEle-prices[i]);
    }
    return maxProfit;
}