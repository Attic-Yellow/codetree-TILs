#include <iostream>

using namespace std;

int main() 
{   
    int n;

    cin >> n;
    
    int N[n]; 
    
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (N[i] % 3 == 0 && N[i] % 2 != 0)
        {
            cout << N[i] << "\n";
        }
    }

    return 0;
}