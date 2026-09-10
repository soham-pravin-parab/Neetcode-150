# Longest Consecutive Sequence 
# Explanation 
# Intuition 
To avoid repatedly recounting the same Sequence we only want to start counting only when we find the start of a Consecutive Sequence. A number is the start of a Sequence if nums-1 does not exist after identifying the starting element then we simply keep checking for nums+1 , nums+2 , and so on and keep extending the streak 
# Algorithm 
# Complexity 
Time Complexity : O(n)

Space Complexity : O(n)
