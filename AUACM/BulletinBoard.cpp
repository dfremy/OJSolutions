#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, w, h;
	while(scanf(" %d", &n)!=EOF && n) {
		scanf(" %d %d", &w, &h);
		vector < pair<int, bool> > v[50005];
		
		for(int i=0; i<n; ++i) {
			int x1, y1, x2, y2;
			scanf(" %d %d %d %d", &x1, &y1, &x2, &y2);
			for(int j=x1; j<x2; ++j) {
				v[j].push_back(make_pair(y1,1));
				v[j].push_back(make_pair(y2,0));
			}
		}
		
		for(int i=0; i<50005; ++i) {
			sort(v[i].begin(), v[i].end());
		}
		
		int qt=0, ma = 0;
		for(int i=0; i<50005; ++i) {
			int at = 0;
			for(int j=0; j<v[i].size(); ++j) {
				if(at)
					qt += (v[i][j].first-v[i][j-1].first);
				at+=( (v[i][j].second)? 1:-1);
				ma = max(ma, at);
			}
		}
		printf("%d ", h*w-qt);
		
		qt = 0;
		for(int i=0; i<50005; ++i) {
			int at = 0;
			for(int j=0; j<v[i].size(); ++j) {				
				if(at == ma)
					qt += (v[i][j].first-v[i][j-1].first);
				at+=( (v[i][j].second)? 1:-1);
			}
		}
		
		printf("%d %d\n", ma, qt);
	}
	return 0;
}

