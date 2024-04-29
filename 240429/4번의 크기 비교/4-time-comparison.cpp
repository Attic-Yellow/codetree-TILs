#include <iostream>

using namespace std;

int main() 
{
    int a;

    int num[4];

    cin >> a;

    for (int i = 0; i < 4; i++)
    {
        cin >> num[i];
        
        if (a > num[i])
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
        cout << "\n";
    }

    return 0;
}