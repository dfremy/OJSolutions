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

int pd[160][150][60], m, qt;

int resolve(int at, int m5, int m10){
	if(pd[at][m5][m10]!=-1)
		return pd[at][m5][m10];
	if(at==0)
		return (pd[at][m5][m10]=0);
	
	int minimo=2000000000, m1 = m - (qt-at)*8 - m5*5 - m10*10;
	if(m10)
		minimo = min(minimo, 1+resolve(at-1, m5, m10-1));
	if(m5>1)
		minimo = min(minimo, 2+resolve(at-1, m5-2, m10));
	if(m5 && m1>2)
		minimo = min(minimo, 4+resolve(at-1, m5-1,m10));
	if(m1>7)
		minimo = min(minimo, 8+resolve(at-1, m5, m10));
	if(m10 && m1>2)
		minimo = min(minimo, 4+resolve(at-1, m5+1, m10-1));
		
	return (pd[at][m5][m10]=minimo);
}

int main(){
	int n, m1, m5, m10;
	scanf(" %d", &n);
	while(n--){
		scanf(" %d %d %d %d", &qt, &m1, &m5, &m10);
		memset(pd, -1, sizeof(pd));
		m = m1 + m5*5 + m10*10;
		printf("%d\n", resolve(qt, m5, m10));
	}
	return 0;
}

