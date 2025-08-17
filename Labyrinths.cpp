#include <bits/stdc++.h>
using namespace std;
struct Step {
    int x, y;
};
int main() {
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (auto &row : a) cin >> row;
    vector<vector<Step>> parent(n, vector<Step>(m, {-1, -1}));
    vector<vector<char>> move(n, vector<char>(m));
    queue<Step> q;
    int sx, sy, ex, ey;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 'A') {
                sx = i, sy = j;
                q.push({i, j});
                a[i][j] = '#';  
            }
            if (a[i][j] == 'B') {
                ex = i, ey = j;
            }
        }
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    char dir[] = {'R', 'D', 'L', 'U'};
    bool found = false;
    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        if (x == ex && y == ey) {
            found = true;
            break;
        }
        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && (a[nx][ny] == '.' || a[nx][ny] == 'B')) {
                q.push({nx, ny});
                parent[nx][ny] = {x, y};
                move[nx][ny] = dir[k];
                if (a[nx][ny] != 'B') a[nx][ny] = '#'; 
            }
        }
    }
    if (!found) {
        cout << "NO\n";
    } else {
        string path;
        int x = ex, y = ey;
        while (make_pair(x, y) != make_pair(sx, sy)) {
            char c = move[x][y];
            path += c;
            auto [px, py] = parent[x][y];
            x = px; y = py;
        }
        reverse(path.begin(), path.end());
        cout << "YES\n" << path.size() << "\n" << path << "\n";
    }

    return 0;
}
