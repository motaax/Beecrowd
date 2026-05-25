#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, part;
    cin >> s >> part;

    string res = "";
    int pLen = part.size();

    for (char c : s) {
        res.push_back(c);

        if (res.size() >= pLen &&
            res.substr(res.size() - pLen, pLen) == part) {
            res.erase(res.size() - pLen, pLen);
        }
    }

    if (res.empty()) {
        cout << "null value" << endl;
    } else {
        cout << res << endl;
    }

    return 0;
}