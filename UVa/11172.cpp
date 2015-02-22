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
	int n, a, b;
	scanf(" %d", &n);
	while(n--){
		scanf(" %d %d", &a, &b);
		if(a>b)
			printf(">\n");
		else if(a==b)
			printf("=\n");
		else
			printf("<\n");
	}

	return 0;
}

