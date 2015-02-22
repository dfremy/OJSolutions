#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n, a, b, c;
	while(scanf(" %d %d %d %d", &n, &a, &b, &c)!=EOF && (n || a || b || c)) {
		int res = 4*n - 1;
		if(a > b)
			res+= n-a+b;
		else
			res+= b-a;
		if(b>c)
			res+= b-c;
		else
			res+= b+n-c;
		printf("%d\n", res);	
	}

	return 0;
}

