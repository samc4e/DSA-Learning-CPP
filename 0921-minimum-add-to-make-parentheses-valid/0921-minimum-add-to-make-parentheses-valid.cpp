class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<char>st;
       for(int i=0;i<s.length();i++){
        if(s[i]==')' && !st.empty()){
            if(st.top()=='(')st.pop();
            else{st.push(s[i]);}
        }
        else{st.push(s[i]);}
       }
        return st.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna