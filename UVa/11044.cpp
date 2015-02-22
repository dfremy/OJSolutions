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
		printf("%d\n", (int)(ceil((double)(a-2)/3)*ceil((double)(b-2)/3)));
	}

	return 0;
}

