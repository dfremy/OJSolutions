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
	int i, j, n;
	double va, vb;
	char a[5], b[5];
	while(scanf(" %[^:] %*c %s", a, b)!=EOF){
		va = vb = 0;
		for(i=0;a[i]!='\0';i++){
			va*=10;
			va+=a[i]-'0';
		}
		for(i=0;b[i]!='\0';i++){
			vb*=10;
			vb+=b[i]-'0';
		}
		if(!va)
			break;
		va*=30;
		va+=vb*0.5;
		vb*=6;
		printf("%.3lf\n", min(fabs(va-vb),360-fabs(va-vb)));
	}
	return 0;
}

