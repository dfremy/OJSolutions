#include <bits/stdc++.h>

using namespace std;

int main() {
	int w, h, tes=1;
	while(scanf(" %d %d ", &w, &h)!=EOF && (w || h)) {
		string m[25];
		int x, y;
		int movx = 0, movy = 0;
		for(int i=0; i<h; ++i) {
			cin >> m[i];
		}
			
		for(int i=0; i<h; ++i) {
			for(int j=0; j<w; ++j)
				if(m[i][j]=='*')
					x = i, y = j;
		}
		
		if(x==0)
			movx=1;
		if(x==h-1)
			movx=-1;
		if(y==0)
			movy=1;
		if(y==w-1)
			movy=-1;
		
		while(m[x][y] != 'x') {
			if(m[x][y] == '\\') {
				if(movx) {
					movy = movx;
					movx = 0;
				}
				else {
					movx = movy;
					movy = 0;
				}
			}
			if(m[x][y] == '/') {
				if(movx) {
					movy = -movx;
					movx = 0;
				}
				else {
					movx = -movy;
					movy = 0;
				}
			}
			
			x += movx, y += movy;
		}
		m[x][y] = '&';
		
		printf("HOUSE %d\n", tes++);
		for(int i=0; i<h; ++i) {
			for(int j=0; j<w; ++j)
				printf("%c", m[i][j]);
			printf("\n");
		}
				
	}
	return 0;
}

