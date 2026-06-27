#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Enter total transactions: ";
    cin >> N;

    vector<int> transactions(N);
    cout << "Enter each transaction";
    for(int i = 0; i < N; i++)
        cin >> transactions[i];
    
    cout << "Enter the target: ";
    int target;
    cin >> target;

    bool found = false;

    for(int i = 0; i < N; i++) {
        if(transactions[i] == target) {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Fraud Transaction Found";
    else
        cout << "Transaction Not Found";

    return 0;
}