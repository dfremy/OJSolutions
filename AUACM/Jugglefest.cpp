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
	int n, b, fail, p[8];
	char c, v[25];
	while(scanf(" %d", &n)!=EOF && n) {
		for(int i=0; i<n; i++)
			scanf(" %d", &p[i]);
		c = 'A'-1;
		fail = 0;
		for(int i=0; i<20; i++) {
			v[i] = '!'; 
		}
		for(int i=0; i<20; i++) {
			if(v[i]=='!') {
				c++;
				int prim = 1;
				for(int j = i; j < 20; j += p[j%n]) {
					if(v[j]!='!' && !prim) {
						fail = 1;
						break;
					}
					else {
						v[j] = c;
					}
					prim = 0;
				}
			}
			if(fail)
				break;
		}
		if(fail)
			printf("CRASH\n");
		else {
			for(int i = 0; i < 20; i++)
				printf("%c", v[i]);
			printf("\n");
		}
	}

	return 0;
}

