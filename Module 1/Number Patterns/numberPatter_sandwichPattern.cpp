#include <iostream>
using namespace std;

int main() {

    for(int i = 3; i <= 5; i++) {

        for(int s = 3; s <= i; s++)
            cout << " ";

        for(int j = 1; j <= 6 - i; j++)
            cout << i << " ";

        cout << endl;
    }

    for(int i = 4; i >= 3; i--) {

        for(int s = 3; s <= i; s++)
            cout << " ";

        for(int j = 1; j <= 6 - i; j++)
            cout << i << " ";

        cout << endl;
    }

    return 0;
}