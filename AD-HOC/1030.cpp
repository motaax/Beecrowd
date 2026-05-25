#include <iostream>
using namespace std;

int josephus(int n, int k) {
    int res = 0;

    for (int i = 2; i <= n; i++) {
        res = (res + k) % i;
    }

    return res + 1;
}

int main() {
    int nc;
    cin >> nc;

    for (int i = 1; i <= nc; i++) {
        int n, k;
        cin >> n >> k;

        cout << "Case " << i << ": " << josephus(n, k) << "\n";
    }

    return 0;
}