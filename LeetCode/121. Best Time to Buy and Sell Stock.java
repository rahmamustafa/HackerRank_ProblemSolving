class Solution {
    public int maxProfit(int[] prices) {
        int min = 0;
        int max=0;
        int flag = 0;       
        for(int i=1;i<prices.length;i++){
            if(prices[i]<prices[min] && i!=prices.length-1)
                min = i;
            maxProfit = maxProfit<(prices[i]-prices[min])?(prices[i]-prices[min]):maxProfit;
            }
        return maxProfit;
    }
}