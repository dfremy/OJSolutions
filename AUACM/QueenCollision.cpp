#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, g, col;
	int l[30005];
	int c[30005];
	int d1[30005*2];
	int d2[30005*2];
	while(scanf(" %d", &n)!=EOF && n) {
		for(int i=0; i<30005; i++) {
			l[i]=0;
			c[i]=0;
		}
		for(int i=0; i<30005*2; i++) {
			d1[i]=0;
			d2[i]=0;
		}
		col = 0;
		scanf(" %d", &g);
		for(int i=0; i<g; i++) {
			int k, x, y, s, t;
			scanf(" %d %d %d %d %d", &k, &x, &y, &s, &t);
			while(k--) {
				l[x]++;
				c[y]++;
				d1[x-y+n]++;
				d2[x+y]++;
				x+=s;
				y+=t;
			}
		}
		for(int i=0; i<30005; i++) {
			if(l[i] > 1)
				col+=l[i]-1;
			if(c[i] > 1)
				col+=c[i]-1;
		}
		for(int i=0; i<30005*2; i++) {
			if(d1[i] > 1)
				col+=d1[i]-1;
			if(d2[i] > 1)
				col+=d2[i]-1;
		}
		printf("%d\n", col);
	}
	return 0;
}

