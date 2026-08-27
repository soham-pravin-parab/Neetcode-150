# Top k Frequent elements 
# Explanation 
# Intuition 
Each element appears a certain number of times and the maximum possible frequency is the length of the array . We can use this idea by creating a list and the index represents  frequency and at each index we can store the element that appears exactly that many times . After we build this group we look for the highest possible frequency and iterate backward collecting the elements until we have k of them .
# Algorithm 
1. Build a frequency map which stores how many times a element appears.
2. Create a list of groups freq where freq[i] stores all the elements which appear i times.
3. For each number and its frequency in the map add the number to freq[frequency].
4. Initialize a empty result list.
5. Loop from the largest frequency down to 1 . For each number in freq[i] add to list . Once result contains k elements return it
# complexity 
Time Complexity : O(n)

Space Complexity : O(n)
