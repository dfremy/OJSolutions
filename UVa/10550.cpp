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
	int a, b, c, d, resp, dif;
	while(scanf(" %d %d %d %d", &a, &b, &c, &d) != EOF && !(!a && !b &&!c && !d)){
		resp=1080;
		dif = 40-b+a;
		if(dif>39)
			dif -= 40;
		resp += 9*dif;
		dif=40-b+c;
		if(dif>39)
			dif -= 40;
		resp += 9*dif;
		dif=40-d+c;
		if(dif>39)
			dif -= 40;
		resp += 9*dif;
		printf("%d\n", resp);
	}

	return 0;
}

