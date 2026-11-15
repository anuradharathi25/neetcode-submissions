class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char topChar = st.top();
        for(char ch : s){
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char topChar = st.top();
                if (ch == ')' && topChar == '(') {
                    st.pop(); 
                } 
                else if (ch == '}' && topChar == '{') {
                    st.pop();
                } 
                else if (ch == ']' && topChar == '[') {
                    st.pop();
                } 
                else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
