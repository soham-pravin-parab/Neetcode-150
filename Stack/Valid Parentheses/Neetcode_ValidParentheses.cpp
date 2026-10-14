class Solution {
   public:
    bool isValid(string s) {
       std:: stack<char> stack;
       std:: unordered_map<char, char> openToclose = {{')','('}, { ']','['}, { '}','{'}};
        for (char c : s) {
            if (openToclose.count(c)) {
                if (!stack.empty() && stack.top() == openToclose[c]) {
                    stack.pop();
                } else {
                    return false;
                }
            } else {
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
