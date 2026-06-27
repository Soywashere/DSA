#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Enter total no. of employees: "; 
    cin >> N;

    vector<int> salary(N);
    cout << "Enter their salaries";

    for(int i = 0; i < N; i++)
        cin >> salary[i];

    for(int i = 0; i < N - 1; i++) {
        for(int j = 0; j < N - i - 1; j++) {
            if(salary[j] > salary[j + 1]) {
                swap(salary[j], salary[j + 1]);
            }
        }
    }

    for(int x : salary)
        cout << x << " ";

    return 0;
}