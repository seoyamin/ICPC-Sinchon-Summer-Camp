#include <iostream>
#include <queue>

using namespace std;

int main() {

    int N;
    cin >> N;

    queue<int> q;
    string action;
    int num;

    while(N--) {
        cin >> action;

        if(action == "push") {
            cin >> num;
            q.push(num);
        }

        else if(action == "pop") {
            if(q.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        }

        else if(action == "size")
            cout << q.size() << "\n";

        else if(action == "empty") {
            int result = (q.empty()) ? 1 : 0;
            cout << result << "\n";
        }

        else if(action == "front") {
            if(q.empty())
                cout << -1 << "\n";

            else {
                cout << q.front() << "\n";
            }
        }

        else {
            if(q.empty())
                cout << -1 << "\n";

            else {
                cout << q.back() << "\n";
            }
        }
    }

    return 0;
}