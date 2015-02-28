#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, s, t, ans;
	while(scanf(" %d", &n)!=EOF && n) {
		scanf(" %d %d", &s, &t);
		int b[205];
		int pd[205][205];
		for(int i=0; i<205; ++i)
			for(int j=0; j<205; ++j)
				pd[i][j] = -999999999;
		ans = -999999999;
		
		pd[0][0] = 1;
		
		for(int i=1; i<=n; ++i)
			scanf(" %d", &b[i]);
		
		for(int i=0; i<=n; ++i) {
			for(int j=1; j<=s; ++j) {
				
				for(int k=0; k<t; ++k) {
					if(pd[i][k] != -999999999) {
						if(i+j >= n+1)
							pd[n+1][k+1] = max(pd[n+1][k+1], pd[i][k]);
						else
							pd[i+j][k+1] = max(pd[i+j][k+1], pd[i][k]+b[i+j]);
					}
				}
				
			}
		}
		
		for(int i=0; i<=t; ++i)
			ans = max(ans, pd[n+1][i]);
		
		printf("%d\n", ans-1);
	}
	return 0;
}

