#include <iostream>

using namespace std;

int main() {

    int H, M;
    cin >> H >> M;

    int totalMin = H * 60 + M;
    int newMin = totalMin - 45;

    if(newMin < 0) newMin += (24 * 60);

    H = newMin / 60;
    M = newMin % 60;

    cout << H << " " << M;

    return 0;
}