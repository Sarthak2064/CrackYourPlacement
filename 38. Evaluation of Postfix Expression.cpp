//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S) {
        stack<int> stk;
        for (char ch : S) {
            if (isdigit(ch)) {
                // If the character is a digit, push it to the stack
                stk.push(ch - '0');
            } else {
                // Otherwise, the character is an operator.
                // Pop two operands from the stack
                int val2 = stk.top(); stk.pop();
                int val1 = stk.top(); stk.pop();
                switch (ch) {
                    case '+': stk.push(val1 + val2); break;
                    case '-': stk.push(val1 - val2); break;
                    case '*': stk.push(val1 * val2); break;
                    case '/': stk.push(val1 / val2); break;
                }
            }
        }
        // The final result will be the only element in the stack
        return stk.top();
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends