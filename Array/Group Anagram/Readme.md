# Group Anagram 
# Explanation 
## Intuition 
Instead of sorting a string we can represent a string by frequency of its characters. Two strings are anagrams if and only if the frequency of their characters are equal . By using a frequency array we group all the strings that share the same frequency 
## Algorithm 
1. Create a hash map
2. For each string in the input
 . initialize a count array of size 26 with 0
 . For each character c increment the count at the corresponding index
 . Append the string to the list associated with this key
3. After processing all strings return all the list stored in the hash map

## Complexity 
Time Complexity : O(m * n)

Space Complexity : O(m * n) 

[total space if the output groups are counted]
