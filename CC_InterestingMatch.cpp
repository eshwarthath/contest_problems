#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (abs(X - Y) <= 2)
        cout << "Interesting";
    else
        cout << "Boring";

    return 0;
}
