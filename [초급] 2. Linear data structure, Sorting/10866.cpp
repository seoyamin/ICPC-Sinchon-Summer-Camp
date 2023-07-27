#include <iostream>
#include <deque>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    deque<int> dq;
    string action;
    int num;

    while(N--) {
        cin >> action;

        if(action == "push_front") {
            cin >> num;
            dq.push_front(num);
        }

        else if(action == "push_back") {
            cin >> num;
            dq.push_back(num);
        }

        else if(action == "pop_front") {
            if(dq.empty())
                cout << -1 << "\n";

            else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }

        else if(action == "pop_back") {
            if(dq.empty())
                cout << -1 << "\n";

            else {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }

        else if(action == "size") {
            cout << dq.size() << "\n";
        }

        else if(action == "empty") {
            int result = (dq.empty()) ? 1 : 0;
            cout << result << "\n";
        }

        else if(action == "front") {
            if(dq.empty())
                cout << -1 << "\n";
            else
                cout << dq.front() << "\n";
        }

        else {
            if(dq.empty())
                cout << -1 << "\n";
            else
                cout << dq.back() << "\n";
        }
    }

    return 0;
}
