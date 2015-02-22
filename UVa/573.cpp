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
	int i, j, dia;
	double h, u, d, f, at;
	while( scanf(" %lf %lf %lf %lf", &h, &u, &d, &f) != EOF && h){
		f=f*u/100;
		at=dia=0;
		while(at>=0 && at<=h){
			dia++;
			at+=max((double)0, u);
			if(at>h)
				break;
			at-=d;
			u-=f;
		}
		if(at>h)
			printf("success on day %d\n", dia);
		else
			printf("failure on day %d\n", dia);
	}
	return 0;
}

