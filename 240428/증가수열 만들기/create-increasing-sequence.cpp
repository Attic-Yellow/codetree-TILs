#include <iostream>
#include <vector>
#include <algorithm>

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

    long long count = 0;

    for (int i = n - 2; i >= 0; i--) 
    {
        if (list[i] >= list[i + 1]) 
        {
            int decrease = list[i] - list[i + 1] + 1;
            count += decrease;
            list[i] = list[i + 1] - 1; 
        }
    }

    cout << count;

    return 0;
}