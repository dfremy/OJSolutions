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
	int n, t, ant, at, h, l;
	scanf(" %d", &t);
	for(int i=1;i<=t;i++){
		h = l = 0;
		scanf(" %d %d", &n, &ant);
		for(int j=1;j<n;j++){
			scanf(" %d", &at);
			if(at>ant)
				h++;
			else if(at<ant)
				l++;
			ant = at;
		}
		printf("Case %d: %d %d\n", i, h, l);
	}

	return 0;
}

