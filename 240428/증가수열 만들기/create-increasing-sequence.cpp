#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<int> list(n);

    for (int i = 0; i < n; ++i) 
    {
        cin >> list[i];
    }

    int count = 0;

    for (int i = 1; i < n; ++i) 
    {
        if (list[i-1] >= list[i]) 
        {
            int decrease = list[i-1] - list[i] + 1;
            count += decrease;
            list[i] += decrease; 
        }
    }

    cout << count;

    return 0;
}