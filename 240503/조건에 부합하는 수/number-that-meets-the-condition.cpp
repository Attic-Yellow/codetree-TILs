#include <iostream>

using namespace std;

int main() 
{
    int a; 
    cin >> a;

    for (int i = 1; i <= a; i++) 
    {
        bool cond1 = (i % 2 == 0) && (i % 4 != 0);
        bool cond2 = ((i / 8) % 2 == 0);
        bool cond3 = (i % 7 < 4);

        if (!(cond1 || cond2 || cond3)) 
        {
            cout << i << " ";
        }
    }

    return 0;
}