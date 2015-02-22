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

int main(){
	int n, x, y, xo, yo;
	while(scanf(" %d", &n)!=EOF && n){
		scanf(" %d %d", &xo, &yo);
		while(n--){
			scanf(" %d %d", &x, &y);
			if(x==xo || y==yo)
				printf("divisa\n");
			else{
				if(y>yo)
					printf("N");
				else
					printf("S");
				if(x>xo)
					printf("E\n");
				else
					printf("O\n");
			}
			
		}
	}
	

	return 0;
}

