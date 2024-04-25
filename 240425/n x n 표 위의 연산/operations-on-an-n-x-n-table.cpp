#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int n;
vector<vector<string>> grid;
int max_result = INT_MIN;
int min_result = INT_MAX;

void dfs(int x, int y, int current_value, string last_op) 
{
    
    if (x == n - 1 && y == n - 1) // (n, n) 위치에 도달했을 경우
    {
        max_result = max(max_result, current_value);
        min_result = min(min_result, current_value);
        return;
    }
    
    // 상, 하, 좌, 우 이동
    const vector<pair<int, int>> directions = {{0, 1}, {1, 0}};
    
    for (auto dir : directions) 
    {
        int new_x = x + dir.first;
        int new_y = y + dir.second;
        
        if (new_x < n && new_y < n) // 경계 조건 검사
        { 
            string next = grid[new_x][new_y];

            if (isdigit(next[0])) // 다음 칸이 숫자인 경우
            { 
                int num = stoi(next);
                int new_value = current_value;
                
                // 연산 수행
                if (last_op == "+") 
                {
                    new_value += num;
                }
                else if (last_op == "-") 
                {
                    new_value -= num;
                }
                else if (last_op == "x") 
                {
                    new_value *= num;
                }
                
                dfs(new_x, new_y, new_value, ""); // 다음 숫자 칸까지의 연산 완료
            } 
            else // 다음 칸이 연산자인 경우
            { 
                dfs(new_x, new_y, current_value, next);
            }
        }
    }
}

int main() 
{
    cin >> n;
    grid.resize(n, vector<string>(n));
    
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            cin >> grid[i][j];
        }
    }
    
    int start_value = stoi(grid[0][0]); // (1,1)에서 시작, 첫 칸의 숫자로 초기화
    dfs(0, 0, start_value, "");
    
    cout << max_result << " " << min_result << endl;
    
    return 0;
}