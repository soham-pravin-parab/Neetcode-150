# Two integer Sum II
# Explanation 
# Intuition 
Because the array is sorted we can use two pointers to adjust the sum efficiently. If the sum is too small we can move the left pointer forward and if the sum is too large then we can move the right pointer backward 
# Algorithm 
1. Initialize two pointers: l = 0 and r = length - 1
2.  while l < r
   
   ● currSum = numbers[l] + numbers [r]

   ● If currSum > target move r left to reduce the sum
   
   ● If currSum <target move l right to increase the sum
   
   ● If currSum == target return [l + 1] ,[r + 1]
   
3. If no pairs match return a empty list
# Complexity 
