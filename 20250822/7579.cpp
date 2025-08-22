#include <iostream>
#include <queue>
using namespace std;

int box[100][100][100];
int days[100][100][100];
int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m, n, h;
    cin >> m >> n >> h;
    queue<tuple<int, int, int>> q;

    for (int z = 0; z < h; z++) {
        for (int x = 0; x < n; x++) {
            for (int y = 0; y < m; y++) {
                cin >> box[z][x][y];
                days[z][x][y] = -1;
                if (box[z][x][y] == 1) {
                    q.push({z, x, y});
                    days[z][x][y] = 0;
                }
            }
        }
    }

    while (!q.empty()) {
        auto [z, x, y] = q.front(); q.pop();
        for (int d = 0; d < 6; d++) {
            int nz = z + dz[d];
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (nz < 0 || nz >= h || nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (box[nz][nx][ny] != 0) continue;
            if (days[nz][nx][ny] != -1) continue;
            days[nz][nx][ny] = days[z][x][y] + 1;
            q.push({nz, nx, ny});
        }
    }

    int answer = 0;
    for (int z = 0; z < h; z++) {
        for (int x = 0; x < n; x++) {
            for (int y = 0; y < m; y++) {
                if (box[z][x][y] == 0 && days[z][x][y] == -1) {
                    cout << -1 << '\n';
                    return 0;
                }
                if (days[z][x][y] > answer) answer = days[z][x][y];
            }
        }
    }
    cout << answer << '\n';
    return 0;
}