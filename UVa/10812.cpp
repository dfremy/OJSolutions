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

int main() {
	int n, a, b, at;
	scanf(" %d", &n);
	for(int i = 0; i < n; i++) {
		scanf(" %d %d", &a, &b);
		at = a+b;
		if(b>a || at%2)
			printf("impossible\n");
		else
			printf("%d %d\n", at/2, a-at/2);
	}

	return 0;
}

