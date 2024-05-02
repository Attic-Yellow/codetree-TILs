#include <iostream>

using namespace std;

int main() 
{
    int n;
    int i = 1;

    cin >> n;

    int answer = n;

    while (answer > 1)
    {
        answer /= i;
        i++;
    }

    cout << i - 1;

    return 0;
}