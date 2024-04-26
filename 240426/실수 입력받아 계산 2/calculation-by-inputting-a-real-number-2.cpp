#include <iostream>

using namespace std;

int main() 
{
    float a;

    cin >> a;

    cout << fixed;
    cout.precision(2);

    a += 1.5;

    cout << a;
    return 0;
}