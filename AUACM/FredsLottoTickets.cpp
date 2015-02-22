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
	while(scanf(" %d", &n)!=EOF && n) {
		int v[50];
		for(int i=1; i<50; i++)
			v[i] = 0;
		for(int i=0; i<n*6; i++) {
			int a;
			scanf(" %d", &a);
			v[a] = 1;
		}
		int print = 0;
		for(int i=1; i<50; i++) {
			if(!v[i]) {
				printf("No\n");
				print=1;
				break;
			}
		}
		if(!print)
			printf("Yes\n");
	}

	return 0;
}

