# Encode and Decode string 
# Explanation 
# Intuition 
For every string we write Length#string 
the # character acts as clear boundary between the length and the actual content 
the length ensures that we know exactly how many characters to read no matter what characters appear in the string . During Decoding we simply read characters until we reach # to find the length then extract exactly that many characters as the string 
# Algorithm 
# Complexity 
Time Complexity : O(m+n)
Space Complexity : O(m+n)
