#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int a, b;

    cin >> a >> b;

    int num1 = 1920, num2 = 2880;
    
    int gcd = __gcd(num1, num2);
    
    bool found = false;
    for (int i = 1; i <= gcd; i++) 
    {
        if (gcd % i == 0) 
        {  
            if (i >= a && i <= b) 
            {  
                found = true;
                break;
            }
        }
    }
    
    if (found) 
    {
        cout << 1;
    } else 
    {
        cout << 0;
    }

    return 0;
}