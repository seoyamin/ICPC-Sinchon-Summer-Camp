#include <iostream>

using namespace std;

int factorial(int i) {
    if(i==0 || i==1) return 1;

    return i * factorial(i-1);
}

int main() {

    int N, K;
    cin >> N >> K;
    int result;

    if(K==0 || K==N) result = 1;
    else result = factorial(N) / (factorial(K) * factorial(N-K));

    cout << result;

    return 0;
}