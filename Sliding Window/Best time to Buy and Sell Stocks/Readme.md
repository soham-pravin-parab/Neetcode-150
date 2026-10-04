# Best time to Buy and Sell Stock 
# Explanation 
# Intuition 
We use two pointer approach here . L represent the buy day and R represents the sell day if R is greater than L we mske profit and update the maximum and if R is less than L we update the L to R to get the lowest price 
# Algorithm 
1. Set two pointers
   
   ● Initialize L = 0 (Buy day)
   
   ● Initialize R = 1 (Sell day)
   
   ● maxP = 0 (to track maximum profit)
   
2. while R is within the array
   
   ● if prices[R] > prices[L] compute the profit and update the maxp
   
   ● Otherwise move L to R
   
   ● Move R to next day
   
# Complexity 
Time Complexity : O(n)

Space Complexity : O(1)
