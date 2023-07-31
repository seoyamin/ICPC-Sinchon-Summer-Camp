#include <iostream>

using namespace std;

int N, S;
int answer = 0;
int arr[20];

void recur(int idx, int currentSum) {
    if(idx == N) return;

    currentSum += arr[idx];
    if(currentSum == S) answer++;

    recur(idx+1, currentSum);
    recur(idx+1, currentSum - arr[idx]);
}

int main() {

    cin >> N >> S;

    for(int i=0 ; i<N ; i++) {
        cin >> arr[i];
    }

    recur(0, 0);
    cout << answer;

    return 0;
}