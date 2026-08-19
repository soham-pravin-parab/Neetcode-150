# Two Sum
# Explanation 
## Intuition 
We can use a hash map to store value of a element and its index and a hash map can be used to find its complement 
## Algorithm 
1. Create a hash map to store the value and index of the elements
2. Iterate through the array and find its complement which is target-nums[i]
3. check if the complement exists in the map
4. if no such pair is found return an empty array
## Complexity 
Time Complexity : O(n)

Space Complexity : O(n)
