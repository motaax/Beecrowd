#include <iostream>
using namespace std;

bool ehPrimo(long long x) {
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;

    for (long long i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    while (N--) {
        long long X;
        cin >> X;

        if (ehPrimo(X))
            cout << X << " eh primo" << endl;
        else
            cout << X << " nao eh primo" << endl;
    }

    return 0;
}