#include <iostream>

using namespace std;

void print_diamond(int n) 
{
    int totalRows = 2 * n - 1;

    for (int row = 0; row < totalRows; row++) 
    {
        int numStars = n - abs(n - 1 - row); 
        int numSpaces = n - numStars;    

        for (int j = 0; j < numSpaces; j++)
         {
            cout << " ";
        }

        for (int k = 0; k < numStars; k++) 
        {
            cout << "* ";
        }
        
        cout << "\n";
    }
}

int main() 
{
    int n;
    cin >> n;

    print_diamond(n);

    return 0;
}