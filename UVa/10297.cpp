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

using namespace std;

int main(){
	double V, D;
	while(scanf(" %lf %lf", &D, &V)!=EOF && D && V){
		printf("%.3lf\n", pow(D*D*D-6*V/acos(-1), 1.0/3.0));
	}
	return 0;
}
