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
	int n, k, res;
	while(scanf(" %d %d", &n, &k)!=EOF){
		res=n;
		while(n>=k){
			res+=n/k;
			n-=(n/k)*k-n/k;
		}
		printf("%d\n", res);
	}
	return 0;
}

