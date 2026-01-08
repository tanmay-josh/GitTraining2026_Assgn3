#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c;
    cin >> n;
    while (n--) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}
