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
	int i, j, n, erro, ant, at, prox;
	scanf(" %d", &n);
	printf("Lumberjacks:\n");
	for(i=0;i<n;i++){
		erro=0;
		scanf(" %d %d", &ant, &at);
		for(j=2;j<10;j++){
			scanf(" %d", &prox);
			if((at-ant<0)!=(prox-at<0))
				erro=1;
			ant = at;
			at = prox;
		}
		if(erro)
			printf("Unordered\n");
		else
			printf("Ordered\n");
	}
	return 0;
}

