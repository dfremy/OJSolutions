#include <bits/stdc++.h>

using namespace std;

int WALL = -1;
int b[1005][1005], ans;
queue <pair <int, int> > q;

void fill(int x, int y, int k) {
	if(b[x][y] == 0) {
		ans++;
		q.push(make_pair(x,y));
		b[x][y]=k;
	}
}

int main() {
	int x, y, t, l, w, lx, ly;
	while(scanf(" %d %d %d %d %d", &x, &y, &t, &l, &w)!=EOF) {
		for(int i=0; i<1005; ++i)
			for(int j=0; j<1005; ++j)
				b[i][j] = 0;
				
		ans = 0;
		for(int i=1; i<=x; ++i) {
			b[i][0] = WALL;
			b[i][y+1] = WALL;
		}
		for(int i=1; i<=y; ++i) {
			b[0][i] = WALL;
			b[x+1][i] = WALL;
		}
		
		for(int i=0; i<l; ++i) {
			scanf(" %d %d", &lx, &ly);
			b[lx][ly] = 1;
			q.push(make_pair(lx, ly));
			ans++;
		}
		int wx1, wx2, wy1, wy2;
		for(int i=0; i<w; ++i) {
			scanf(" %d %d %d %d", &wx1, &wy1, &wx2, &wy2);
			b[wx1][wy1] = WALL;
			int movx = (wx2-wx1), movy = (wy2-wy1);
			if(movx)
				movx /= abs(movx);
			if(movy)
				movy /= abs(movy);
			while(wx1!=wx2 || wy1!=wy2) {
				b[wx1][wy1] = WALL;
				wx1 += movx;
				wy1 += movy;
			}
			b[wx1][wy1] = WALL;
		}
		
		while(!q.empty()) {
			pair<int, int> pos = q.front();
			q.pop();
			if(b[pos.first][pos.second] < t) {
				fill(pos.first+1, pos.second, b[pos.first][pos.second]+1);
				fill(pos.first-1, pos.second, b[pos.first][pos.second]+1);
				fill(pos.first, pos.second+1, b[pos.first][pos.second]+1);
				fill(pos.first, pos.second-1, b[pos.first][pos.second]+1);
			}
		}
		
		printf("%d\n", ans);
	}
	return 0;
}

