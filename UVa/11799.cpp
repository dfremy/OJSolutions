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
	int i, j, n, a, t, vel;
	scanf(" %d", &t);
	for(i=1;i<=t;i++){
		vel=0;
		scanf(" %d", &n);
		for(j=0;j<n;j++){
			scanf(" %d", &a);
			vel = max(vel, a);
		}
		printf("Case %d: %d\n", i, vel);
	}
	return 0;
}

