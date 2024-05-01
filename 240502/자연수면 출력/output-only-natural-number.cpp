#include <iostream>

using namespace std;

int main() 
{
    int a, b;

    cin >> a >> b;

    for (int i = 0; i < b; i++)
    {
        if (a > 0)
        {
            cout << a;
        }
        else
        {
            cout << 0;
            return 0;
        }
    }
    
    return 0;
}