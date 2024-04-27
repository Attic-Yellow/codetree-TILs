#include <iostream>

using namespace std;

int main() 
{
    string s;

    cin >> s;

    for (int i = 0; i < 4; i++)
    {
        int temp = s[4 + i];
        s[4 + i] = s[9 + i];
        s[9 + i] = temp;
    }

    cout << s;
    return 0;
}