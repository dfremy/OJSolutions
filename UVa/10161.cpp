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

int main()
{
	int i, j, n;
	while(scanf(" %d", &n)!=EOF && n){
		for(i=1;i*i<n;i++);
		n-=(i-1)*(i-1);
		if(n<=i){
			if(i%2)
				printf("%d %d\n", i, n);
			else
				printf("%d %d\n", n, i);
		}
		else{
			if(i%2)
				printf("%d %d\n", i-(n-i), i);
			else
				printf("%d %d\n", i, i-(n-i));
		}
	}
	return 0;
}

