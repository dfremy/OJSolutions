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
	long long num;
	while(scanf(" %lld", &num) != EOF && num != 0) {
		printf("%lld\n", num*(num+1)*(num+2)/6);
	}
	return 0;
}
