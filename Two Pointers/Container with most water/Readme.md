# Container With Most Water 
# Explanation 
# Intuition 
We use two pointers approach in this problem . Here the maximum area is limited by the shorter line so we keep moving the shorter line inward to increase the area . By always moving the shorter line we explore the possibility. 
# Algorithm 
1. Initialize two pointers l = 0 and r = len(height) .size()
2. set res = 0 to store the maximum area
3. while l < r

   ● Compute the current  area :
   area : min(height[l] , height[r])* (r - l)
   
   ● Update res with maximum area so far
   
   ● Move the pointer at shorter height
   
4. return res
# Complexity 
Time Complexity : O(n)

Space Complexity : O(1)
