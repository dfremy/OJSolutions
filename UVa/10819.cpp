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

#define MAXN 10500

using namespace std;

int pd[MAXN];

int main(){
	int m, n, c, s, res;
	while(scanf(" %d %d", &m, &n) != EOF){
		for(int i = 0; i < MAXN; i++)
			pd[i] = -1;
		res = 0;
		pd[0] = 0;
		for(int i = 0; i < n; i++){
			scanf(" %d %d", &c, &s);
			for(int j = MAXN; j >= c; j--){
				pd[j] = max(pd[j - c] + s, pd[j]);
			}
		}
		for(int i = 0; i < MAXN; i++){
			if(i < m || (i > 2000 && m + 200 >= i))
				res = max(res, pd[i]);
		}
		printf("%d\n", res);
	}
	return 0;
}

