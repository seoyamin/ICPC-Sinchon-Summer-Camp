#include <iostream>
#include <stack>

using namespace std;

int main() {

    int N;
    cin >> N;

    stack<int> st;
    string action;
    int num;

    while(N--) {
        cin >> action;

        if(action == "push") {
            cin >> num;
            st.push(num);
        }

        else if(action == "pop") {
            if(st.empty())
                cout << -1 << "\n";

            else {
                cout << st.top() << "\n";
                st.pop();
            }
        }

        else if(action == "size")
            cout << st.size() << "\n";

        else if(action == "empty") {
            int result = (st.empty()) ? 1 : 0;
            cout << result << "\n";
        }

        else {
            if(st.empty())
                cout << -1 << "\n";

            else {
                cout << st.top() << "\n";
            }
        }
    }

    return 0;
}