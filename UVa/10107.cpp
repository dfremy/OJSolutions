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

vector <int> v;

int main(){
	int a;
	while(scanf(" %d", &a)!=EOF){
		v.push_back(a);
		sort(v.begin(), v.end());
		if(v.size()%2)
			printf("%d\n", v[v.size()/2]);
		else
			printf("%d\n", (v[v.size()/2]+v[v.size()/2-1])/2);
	}
	return 0;
}
