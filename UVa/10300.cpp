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

#define esprintf(b, s...) bytes+=sprintf(&b[bytes], s)

using namespace std;

int main(){
	int i, j, n, t, resp, area, ambiental;
	scanf(" %d", &t);
	while(t--){
		resp=0;
		scanf(" %d", &n);
		for(i=0;i<n;i++){
			scanf(" %d %*d %d", &area, &ambiental);
			resp+=area*ambiental;
		}
		printf("%d\n", resp);
	}
	return 0;
}
