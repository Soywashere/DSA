#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> time(N);

    for(int i = 0; i < N; i++)
        cin >> time[i];

    for(int i = 1; i < N; i++) {

        int key = time[i];
        int j = i - 1;

        while(j >= 0 && time[j] > key) {
            time[j + 1] = time[j];
            j--;
        }

        time[j + 1] = key;
    }

    for(int x : time)
        cout << x << " ";

    return 0;
}