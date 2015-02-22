#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	double d, a, b, c;
	scanf(" %d", &n);
	while(n--) {
		scanf(" %d %lf %lf %lf %lf", &k, &d, &a, &b, &c);
		printf("%d %.2lf\n", k, c*d/(a+b));
	}
	return 0;
}

