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
	int r;
	long long i, n;
	while(scanf(" %lld", &n)!=EOF && n){
		if(sqrt(n)==ceil(sqrt(n)))
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0;
}

