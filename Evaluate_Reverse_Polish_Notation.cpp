//https://leetcode.com/problems/evaluate-reverse-polish-notation/description/
//You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> st;
        int n = tokens.size();
        for(int i = 0; i < n; i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/" ){
                long second_op = st.top();
                st.pop();
                long first_op = st.top();
                st.pop();
                if(tokens[i] == "+") st.push(first_op + second_op);
                else if(tokens[i] == "-") st.push(first_op - second_op);
                else if(tokens[i] == "*") st.push(first_op * second_op);
                else st.push(first_op / second_op);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
