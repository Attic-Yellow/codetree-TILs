#include <iostream>

using namespace std;

int main() 
{
    int n;
    int answer = 1;

    for (int i = 0; i < 5; i++)
    {
        cin >> n;

        if (n % 3 != 0)
        {
            answer = 0;
        }
    }

    cout << answer;

    return 0;
}