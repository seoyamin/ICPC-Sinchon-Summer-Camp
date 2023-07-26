#include <iostream>

using namespace std;

int main() {

    int asc[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int desc[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    bool isAsc = true, isDesc = true;

    int input;
    for(int i=0 ; i<8 ; i++) {
        cin >> input;

        if(input != asc[i]) isAsc = false;
        if(input != desc[i]) isDesc = false;
    }

    if(isAsc) cout << "ascending";
    else if(isDesc) cout << "descending";
    else cout << "mixed";

    return 0;
}