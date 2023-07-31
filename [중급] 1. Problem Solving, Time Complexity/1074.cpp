#include <iostream>
#include <cmath>

using namespace std;

int N, r, c;
int count = 0;

void divide(int currR, int currC, int n) {
    if(currR == r && currC == c) {
        cout << count;
        return;
    }

    if(r >= currR && r < currR + n && c >= currC && c < currC + n) {
        int nextN = n/2;
        divide(currR, currC, nextN);
        divide(currR, currC + nextN, nextN);
        divide(currR + nextN, currC, nextN);
        divide(currR + nextN, currC + nextN, nextN);
    }

    else {
        count += n * n;
    }
}

int main() {

    cin >> N >> r >> c;

    divide(0, 0, pow(2, N));

    return 0;
}