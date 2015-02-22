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
	int n;
	while(scanf(" %d", &n) != EOF && n) {
		double t1 = d/s1, t2 = d/s2;
		double t = fabs(t1 - t2);
		int h = int(t);
		t = (t-h) * 60;
		int m = int(t);
		t = (t-m) * 60;
		printf("%d:%02d:%02.0lf\n", h, m, t);
	}

	return 0;
}

