#include <iostream>
using namespace std;

int main() {
    for(int i=3;i<=7;i++) {
        for(int j=3; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    for(int i = 6; i >= 3; i--) {
        for(int j=3; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}