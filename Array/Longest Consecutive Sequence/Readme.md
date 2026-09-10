# Longest Consecutive Sequence 
# Explanation 
# Intuition 
To avoid repatedly recounting the same Sequence we only want to start counting only when we find the start of a Consecutive Sequence. A number is the start of a Sequence if nums-1 does not exist after identifying the starting element then we simply keep checking for nums+1 , nums+2 , and so on and keep extending the streak 
# Algorithm 
1. Convert the list to numSet for O(1) lookup
2. Initialize Longest to keep track of length of Longest Sequence
3. For each nums in numSet
   
   ● Check if nums-1 is not in set
   
   ● If true then num is the start of the Sequence
   
   ● While nums + length exists in the set increase length
   
   ● Update longest with Longest length found
   
 4. Return longest after scanning all the elements 
# Complexity 
Time Complexity : O(n)

Space Complexity : O(n)
