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

int bi(int y) {
	if((!(y%4) && y%100) || !(y%400))
		return 1;
	return 0;
}

int main() {
	int n, d, m, y;
	int days[2][13] = {  {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
						 {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} };
	while(scanf(" %d %d %d %d", &n, &d, &m, &y) != EOF && d) {
		while(n > 0) {
			int bis = bi(y);
			int at = (n > days[bis][m]-d) ? days[bis][m]-d+1 : n;
			d += at;
			n -= at;
			if(d > days[bis][m])
				d = 1, 	m++;
			if(m > 12)
				m = 1, y++;
		}
		printf("%d %d %d\n", d, m, y);
	}
	return 0;
}

