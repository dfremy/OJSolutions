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
	int i, j, n, r, t=1;
	double m, v, pwin;
	char s[500], a[500], win[500];
	while(scanf(" %d %d", &r, &n) != EOF && n){
		if(t>1)
			printf("\n");
		m=0;
		getchar();
		for(i=0;i<r;i++){
			gets(a);
		}
		for(i=0;i<n;i++){
			gets(s);
			scanf(" %lf %d ", &v, &r);
			for(j=0;j<r;j++){
				gets(a);
			}
			if(r>m || (r==m && v<pwin) ){
				m=r;
				pwin = v;
				memcpy(win, s, 100);
			}
		}
		printf("RFP #%d\n%s\n", t++, win);
	}

	return 0;
}

