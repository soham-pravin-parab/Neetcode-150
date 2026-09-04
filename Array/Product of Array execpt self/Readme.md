# Product of Array execpt self 
# Explanation 
# Intuition 
We use a two pass approach here. In the first pass we fill res[i] with product of all the elements to the left of i . In the second pass we fill res[i] with the product of all the elements to the right of i .
# Algorithm 
1. initialize the result array res with all set values to 1.
2. create a variable prefix = 1.
3. FIRST PASS (left to right)
   
● for each index i

● set res[i] = prefix

● update prefix *= nums[i]

5. create variable postfix = 1;
6. Second pass (right to left)
   
  ● for each i
   
  ● multiply res[i] by postfix
  
  ●  update postfix *=nums[i]
  
7. Return the result array res
   # Complexity 
Time Complexity : O(n)

Space Complexity : O(1)

