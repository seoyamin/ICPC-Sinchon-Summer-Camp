#include <iostream>

using namespace std;

int main() {

    int r = 31, M = 1234567891;

    int L;
    string input;
    cin >> L >> input;

    long long result = 0;
    long long ri = 1;
    for(int i=0 ; i<L ; i++) {
        int a = input[i] - 'a' + 1;
        result = (result + (a * ri)) % M;
        ri = (ri * r) % M;
    }

    cout << result;

    return 0;
}
