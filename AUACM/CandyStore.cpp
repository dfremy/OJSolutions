#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	double k;
	int dp[10005];
	while(scanf(" %d %lf", &n, &k)!=EOF && (n || k) ) {
		int money = (int)(k*100), cal, best = 0;
		double price;
		
		for(int i=0; i<=money; ++i)
			dp[i] = 0;
		
		dp[0] = 1;
		
		for(int i=0; i<n; ++i) {
			scanf(" %d %lf", &cal, &price);
			int pri = (int)(price*100);
			
			for(int j=0; j+pri <= money; ++j) {
				if(dp[j] && dp[j]+cal>dp[j+pri]) {
					dp[j+pri] = (dp[j]+cal);
					if(dp[j+pri] > best)
						best = dp[j+pri];
				}
			}
		}
		
		printf("%d\n", best-1);
	}
	return 0;
}

