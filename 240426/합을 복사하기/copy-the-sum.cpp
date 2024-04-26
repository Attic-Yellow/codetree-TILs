#include <iostream>

using namespace std;

int main() 
{
    int a = 1, b = 2, c = 3;
    a += b + c;
    b = a;
    c = a;

    cout << a << " ";
    cout << b << " ";
    cout << c;
    return 0;
}