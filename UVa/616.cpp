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
	int pes, j, ja, n;
	while(scanf(" %d", &n)!=EOF && n>=0){
		ja=0;
		int raiz = sqrt(n)+1;
		for(pes=raiz;pes>1 && !ja;pes--){
			int at = n;
			for(j=0;j<pes && at%pes==1;j++){
				at-=at/pes +1;
			}
			if(j==pes && !(at%pes)){
				ja=1;
				break;
			}
			if(ja)
				break;
		}
		if(ja)
			printf("%d coconuts, %d people and 1 monkey\n", n, pes);
		else
			printf("%d coconuts, no solution\n", n);
	}

	return 0;
}

