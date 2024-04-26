#include <iostream>

using namespace std;

int main() 
{
    int a = 5, b = 6, c = 7;
    int temp = 0;
    temp = a;
    a = c;
    c = b;
    b = temp;

    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    return 0;
}