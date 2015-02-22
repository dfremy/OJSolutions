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
	int n, at;
	while(scanf(" %d", &n)!=EOF && n) {
		while(n > 9) {
			printf("%d ", n);
			at = 1;
			while(n > 0) {
				at *= n%10;
				n/=10;
			}
			n = at;
		}
		printf("%d\n", n);
	}

	return 0;
}

