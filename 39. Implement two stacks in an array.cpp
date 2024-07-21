//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class twoStacks {
  private:
    int* arr;
    int top1;
    int top2;
    int size;

public:
    // Constructor to initialize the data structures and variables to be used.
    twoStacks(int n = 100) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = n;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        // There must be at least one empty space for push operation.
        if (top1 < top2 - 1) {
            arr[++top1] = x;
        } else {
            // Overflow condition
            cout << "Stack Overflow\n";
            exit(1);
        }
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        // There must be at least one empty space for push operation.
        if (top1 < top2 - 1) {
            arr[--top2] = x;
        } else {
            // Overflow condition
            cout << "Stack Overflow\n";
            exit(1);
        }
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        if (top1 >= 0) {
            int x = arr[top1--];
            return x;
        } else {
            // Underflow condition
            return -1;
        }
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
        if (top2 < size) {
            int x = arr[top2++];
            return x;
        } else {
            // Underflow condition
            return -1;
        }
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    while (T--) {
        twoStacks *sq = new twoStacks();

        int Q;
        cin >> Q;
        while (Q--) {
            int stack_no;
            cin >> stack_no;
            int QueryType = 0;
            cin >> QueryType;

            if (QueryType == 1) {
                int a;
                cin >> a;
                if (stack_no == 1)
                    sq->push1(a);
                else if (stack_no == 2)
                    sq->push2(a);
            } else if (QueryType == 2) {
                if (stack_no == 1)
                    cout << sq->pop1() << " ";
                else if (stack_no == 2)
                    cout << sq->pop2() << " ";
            }
        }
        cout << endl;
    }
}

// } Driver Code Ends