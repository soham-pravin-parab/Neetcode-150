# Encode and Decode string 
# Explanation 
# Intuition 
For every string we write Length#string 
the # character acts as clear boundary between the length and the actual content 
the length ensures that we know exactly how many characters to read no matter what characters appear in the string . During Decoding we simply read characters until we reach # to find the length then extract exactly that many characters as the string 
# Algorithm 
## Encoding 
1. If the string is empty return an empty string
2. Create a empty list to store the sizes of each string
3. Append the length of the string to the sizes list
4. Build a single string by: writing all lengths separated by commas Adding a # after all the lengths are appended  appending all the actual strings in order
5. Returning final Encoding string 

 # Complexity 
Time Complexity : O(m+n)

Space Complexity : O(m+n)
