# Valid Anagram 
# Explanation 
## Intuition 
Instead of sorting each string we can represent the string by frequency of its character 
since the strings use lowercase English letters a fixed array of 26 elements can capture the frequency of each character 
## Algorithm
Create a fixed array count of 26 elements to capture the frequency of each character initialize a for loop and add the frequency of  elements of the first string and simultaneously subtract the frequency of the elements of the second string . 
Compare and check if the frequency of each element is zero or not if it is the two strings are anagrams and if it isn't then then the two strings are not anagrams 
## Complexity 
Time complexity : O(n)

Space complexity : O(n)
