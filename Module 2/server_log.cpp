#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Enter total IDs: ";
    cin >> N;

    vector<int> logs(N);
    cout << "Enter each ID: ";
    for(int i = 0; i < N; i++)
        cin >> logs[i];

    int target;
    cout << "Enter target ID";
    cin >> target;

    int low = 0, high = N - 1;
    bool found = false;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(logs[mid] == target) {
            found = true;
            break;
        }
        else if(logs[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found)
        cout << "Log Found";
    else
        cout << "Log Not Found";

    return 0;
}