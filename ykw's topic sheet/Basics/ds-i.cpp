//Stack

1. string isBalanced(string s) {
    stack<char> st;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        }
        else {
            if(st.empty()) {
                return "NO";
            }
            if((s[i] == ')' && st.top() != '(') || (s[i] == '{' && st.top() != '}') || (s[i] == '[' && st.top() != ']')) {
                return "NO";   
            }
            st.pop();
        }
    }
    return (st.empty() ? "YES" : "NO");
}
