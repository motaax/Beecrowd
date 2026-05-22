#include <bits/stdc++.h>
using namespace std;
#define pi 3.14159

int main() {
    float raio;
    cin >> raio;
    
    double volume = (4 / 3.0) * pi * pow(raio, 3);
    cout << fixed << setprecision(3) << "VOLUME = " << volume << "\n";  

}