#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <string>
#include <iostream>
#include <algorithm>

#define PI acos(-1)

using namespace std;

int main(){
	int tes=1;
	double area, areaAt, n, Rma, Rme;
	while(scanf(" %lf %lf", &n, &area)!=EOF && n>2){
		areaAt=area/n;
		Rma = sqrt( 2*areaAt / sin(2*PI/n));
		Rme = Rma*cos(PI/n);
		printf("Case %d: %.5lf %.5lf\n", tes++, PI*Rma*Rma - area, area - PI*Rme*Rme);
	}

	return 0;
}

