#include <iostream>

using namespace std;

int main() 
{
    int n;
    int answer;
    int cnt = 0;

    cin >> n;

    while (answer < 1000)
    {
        if (n % 2 == 0)
        {
            n = n * 3 + 1;
        }
        else
        {
            n = n * 2 + 2;
        }

        cnt++;
        answer = n;
    }

    cout << cnt;
    return 0;
}