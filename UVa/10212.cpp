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
	int i, j, n, m;
	
	while(scanf(" %d %d", &n, &m)!=EOF){
		long long res = 1;
		for(i=n;i>n-m;i--){
			res *= i%1000000000;
			while(res%10==0 && res>0) res/=10;
			res%=1000000000;
		}
		printf("%lld\n", res%10);
	}

	return 0;
}

