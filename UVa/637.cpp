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
	int n;
	while(scanf(" %d", &n) != EOF && n) {
		int pag = 1, f = n/4+((n%4>0)?1:0), qt = (f*4)-n;
		f*=2;
		printf("Printing order for %d pages:\n", n);
		if(n==1) {
			printf("Sheet 1, front: Blank, 1\n");
			continue;
		}
		while(f--) {
			if(pag%2) {
				printf("Sheet %d, front: ", (pag+1)/2);
				if(qt) {
					qt--;
					printf("Blank, ");
				}
				else
					printf("%d, ", n--);
				printf("%d\n", pag);
			}
			else {
				printf("Sheet %d, back : ", pag/2);
				printf("%d, ", pag);
				if(qt) {
					qt--;
					printf("Blank\n");
				}
				else
					printf("%d\n", n--);
			}
			pag++;
		}
	}
	return 0;
}

