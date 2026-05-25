#include <iostream>

using namespace std;

int josephus(int n, int m) {
    int sobrevivente = 0;
    for (int i = 2; i <= n; i++) {
        sobrevivente = (sobrevivente + m) % i;
    }
    return sobrevivente;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    
    while (cin >> N && N != 0) {
        int m = 1;
        
        while (true) {
            if (josephus(N - 1, m) == 11) {
                cout << m << "\n";
                break;
            }
            m++;
        }
    }

    return 0;
}