#include <iostream>

using namespace std;

int main() 
{
    int a, b, c;

    cin >> a >> b >> c;

    if (a > b)
    {
        if (c > b)
        {
            if (a > c)
            {
                cout << c;
            }
            else
            {
                cout << a;
            }
        }
        else
        {
            cout << b;
        }
    }
    else
    {
        if (c > b)
        {
            cout << b;
        }
        else
        {
            cout << c;
        }
    }
    
    return 0;
}