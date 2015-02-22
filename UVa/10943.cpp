#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <ctype.h>

using namespace std;

int pd[105][105];

int main(){
	int n, k;
	while(scanf(" %d %d", &n, &k)!=EOF && n){
		memset(pd, 0, sizeof(pd));
		pd[0][0] = 1;
		for(int i=1; i<=k; i++){
			for(int j=0; j<=n; j++){
				for(int p=0; p<=n; p++){
					if(p+j <= n){
						pd[i][p+j] += pd[i-1][p];
						pd[i][p+j]%=1000000;
					}
				}
			}
		}
		printf("%d\n", pd[k][n]);
	}
	return 0;
}

