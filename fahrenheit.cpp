#include <iostream>
using namespace std;

int main() 
{
    float f, c;

    cout << "Enter temperature in Fahrenheit: ";

    cin >> f;

    c = (f - 32) / 1.8;

    cout << "Temperature in Celsius = " << c; 

    return 0;
}
