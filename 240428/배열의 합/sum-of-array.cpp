#include <iostream>

using namespace std;

int main() 
{
    int n[4][4];
    int answer = 0;

    for (int i = 0; i < 4; i++)
    {
        answer = 0;
        
        for (int j = 0; j < 4; j++)
        {
            cin >> n[i][j];
            answer += n[i][j];
        }
        cout << answer << "\n";
    }
    
    return 0;
}