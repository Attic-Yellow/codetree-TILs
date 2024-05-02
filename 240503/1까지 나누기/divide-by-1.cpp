#include <iostream>

using namespace std;

int main() 
{
    int n;
    int i = 1;

    cin >> n;

    int answer = n;

    while (true)
    {
        answer /= i;

        if (answer < 1)
        {
            break;
        }

        i++;
    }

    cout << i;

    return 0;
}