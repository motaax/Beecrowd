#include <bits/stdc++.h>
using namespace std;

template <typename T>
T convert(const string& s) {
    if constexpr (is_integral<T>::value) {
        return static_cast<T>(stoll(s));
    } else {
        return static_cast<T>(stold(s));
    }
}

template <typename T>
string formatNumber(T value) {
    ostringstream oss;

    if constexpr (is_floating_point<T>::value) {
        oss << fixed << setprecision(10) << value;
        string s = oss.str();

        s.erase(s.find_last_not_of('0') + 1, string::npos);
        if (!s.empty() && s.back() == '.') s.pop_back();
        return s;
    } else {
        return to_string(value);
    }
}

template <typename T>
map<pair<size_t, size_t>, T> findIndicesWithSum(const vector<T>& v, T target) {
    map<pair<size_t, size_t>, T> result;

    for (size_t i = 0; i < v.size(); i++) {
        for (size_t j = i + 1; j < v.size(); j++) {
            if (v[i] + v[j] == target) {
                result[{i, j}] = target;
            }
        }
    }

    return result;
}

int main() {
    string line;
    getline(cin, line);

    stringstream ss(line);
    vector<long double> v;
    string temp;

    while (ss >> temp) {
        v.push_back(stold(temp));
    }

    long double target;
    cin >> target;

    auto result = findIndicesWithSum(v, target);

    if (result.empty()) {
        cout << "null value" << endl;
        return 0;
    }

    for (auto& [key, value] : result) {
        cout << key.first << " " << key.second << " "
             << formatNumber(value) << endl;
    }

    return 0;
}