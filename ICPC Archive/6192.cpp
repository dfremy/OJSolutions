#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <iostream>
#include <cctype>

using namespace std;

int main(){
	int n, width, length, height, area, m, a, b;
	while(scanf(" %d %d %d %d %d %d", &n, &width, &length, &height, &area, &m)!=EOF && n){
		int total=2*length*height + 2*width*height + width*length;
		for(int i=0;i<m;i++){
			scanf(" %d %d", &a, &b);
			total -= a*b;
		}
		printf("%d\n", n*total/area + ( (n*total%area)?1:0));
	}
	return 0;
}
