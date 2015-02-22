#include <bits/stdc++.h>

using namespace std;

int n, m;
int b[100][100];
int GOAL = 9999999;
int done = 0;

void move(int x, int y, int k) {
	if(x < 0 || x>=n || y < 0 || y>=m)
		return;
	if(b[x][y] <= k && b[x][y])
		return;
	if(b[x][y] == GOAL)
		done=1;
	b[x][y] = k;
}

int rec(int k) {
	int has = 0;
	int movex[] = {-2, -1, 1, 2, 2, 1, -1, -2};
	int movey[] = {1, 2, 2, 1, -1, -2, -2, -1};
	
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			if(b[i][j]==k) {
				for(int ij=0; ij<8; ij++) {
					move(i+movex[ij], j+movey[ij], k+1);
					if(done)
						return k;
				}
				has = 1;
			}
	
	if(!has)
		return -1;
		
	return rec(k+1);
}

int main() {
	scanf(" %d %d", &n, &m);
	
	char c;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			scanf(" %c", &c);
			if(c=='K')
				b[i][j] = GOAL;
			else if(c=='#')
				b[i][j] = -1;
			else if(c=='X')
				b[i][j] = 1;
			else
				b[i][j] = 0;
		}
	}
	
	printf("%d", rec(1));
	
	return 0;
}

