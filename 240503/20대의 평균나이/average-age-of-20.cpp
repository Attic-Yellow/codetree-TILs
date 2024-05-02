#include <iostream>

using namespace std;

int main() 
{
    int age;
    int count = 0;
    float avg = 0;

    while (true)
    {
        cin >> age;

        if (age > 29 || age < 20)
        {
            break;
        }

        count++;
        avg += age;
    }

    cout<<fixed;
    cout.precision(2);
    cout << avg / count;

    return 0;
}