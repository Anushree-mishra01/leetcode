class Solution {
public:
    bool isValid(string s) {
    stack<char> ch;
    for (char c : s) {
    if(c=='('||c=='{'||c=='[') {
    ch.push(c);
    } 
   else {
   if(ch.empty()) 
   return false;
   char top = ch.top();
   if ((c == ')' && top != '(') ||(c == '}' && top != '{') ||(c == ']' && top != '[')) {
    return false;
    }
    ch.pop();
    }
    }
    return ch.empty();
    }
};