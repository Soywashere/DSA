#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> priority(N);

    for(int i = 0; i < N; i++)
        cin >> priority[i];

    for(int i = 0; i < N - 1; i++) {

        int minIndex = i;

        for(int j = i + 1; j < N; j++) {
            if(priority[j] < priority[minIndex])
                minIndex = j;
        }

        swap(priority[i], priority[minIndex]);
    }

    for(int x : priority)
        cout << x << " ";

    return 0;
}