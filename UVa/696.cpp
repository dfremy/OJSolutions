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

int solve(int n, int m){
    if(n == 1) return m;
    if(n == 2) return m/4 * 4 + (m%4 == 1 ? 2 : (m%4 >= 2 ? 4 : 0));
    return (n*m + 1) / 2;
}

int main() {
	int n, m;
	while(scanf(" %d %d", &n, &m) != EOF && n){
		printf("%d knights may be placed on a %d row %d column board.\n", solve(min(n, m), max(n, m)), n,m);
	}
	return 0;
}

