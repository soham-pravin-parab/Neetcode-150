# Valid Palindrome 
# Explanation 
# Intuition 
We start two pointers from the start and the end  both the pointers move inward skipping all the elements which are not letters  compare both the pointers at every position if at any point they don't match the string is an invalid palindrome. 
# Algorithm 
1. initialize pointers
   
   ● initialize l at the beginning of the array
   
   ● initialize r at the end of the array
   
2. while l is less than r
   
   ● move l forward until it points to a alphanumeric character
   
   ● move r backward until it points to a alphanumeric character
   
   ● compare the lowercase at l and r
   
   ● if they don't match return false
   
   ● move move both pointers inwards
   
3. loop finishes without any mismatch return true 
   # Complexity 
Time Complexity : O(n)

Space Complexity : O(1)
