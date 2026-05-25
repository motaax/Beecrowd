#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<vector<int>> matriz(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matriz[i][j];
        }
    }

    int k;
    cin >> k;

    long long max_num = -1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= m - k; ++j) {
            long long atual = 0;
            for (int passo = 0; passo < k; ++passo) {
                atual = atual * 10 + matriz[i][j + passo];
            }
            max_num = max(max_num, atual);
        }
    }

    for (int i = 0; i <= n - k; ++i) {
        for (int j = 0; j <= m - k; ++j) {
            long long atual = 0;
            for (int passo = 0; passo < k; ++passo) {
                atual = atual * 10 + matriz[i + passo][j + passo];
            }
            max_num = max(max_num, atual);
        }
    }

    cout << max_num << "\n";

    return 0;
}