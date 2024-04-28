#include <iostream>

using namespace std;

int main() 
{
    int n;
    int count = 0;

    cin >> n;

    int list[n];

    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        while (list[i] > list[i + 1] - 1)
        {
           list[i] -= 1;
           count++;
        }
    }

    cout << count;
    return 0;
}