#include <bits/stdc++.h>
using namespace std;

int main() {
    double A, B, C;
    
    cin >> A >> B >> C;

    double media = (A * 2 + B * 3 + C * 5) / 10.0;

    cout << fixed << setprecision(1) << "MEDIA = " << media << "\n";

    return 0;
}