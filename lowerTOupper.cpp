#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter lowercase character: ";
    cin >> ch;

    ch = ch - 32;

    cout << "Uppercase character: " << ch;

    return 0;
}
