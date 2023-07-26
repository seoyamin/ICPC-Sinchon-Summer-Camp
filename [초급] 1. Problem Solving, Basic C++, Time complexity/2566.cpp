#include <iostream>
#include <tuple>

using namespace std;

int main() {

    tuple<int, int, int> max(-1, 0, 0);
    int input;

    for(int i=1 ; i<=9 ; i++) {
        for(int j=1 ; j<=9 ; j++) {
            cin >> input;
            if(input > get<0>(max)) {
                get<0>(max) = input;
                get<1>(max) = i;
                get<2>(max) = j;
            }
        }
    }

    cout << get<0>(max) << endl;
    cout << get<1>(max) << " " << get<2>(max);

    return 0;
}