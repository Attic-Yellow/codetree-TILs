#include <iostream>

using namespace std;

int main() 
{
    int a, b;
    char m, f;

    cin >> a >> m;
    cin >> b >> f;

    if ((a > 18 && m == 'M') || (b > 18 && f == 'M'))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    
    return 0;
}