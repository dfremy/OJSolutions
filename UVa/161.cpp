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
	int i, t, verde[18005], sinais, nall;
	scanf(" %d", &t);
	while(t!=0){
		memset(verde, 0, sizeof(verde));
		sinais=nall=0;
		while(t!=0){
			for(i=0;i<=18000;i+=2*t){
				verde[i]++;
				if(i+t-5 <= 18000)
					verde[i+t-5]--;
			}
			scanf(" %d", &t);
			sinais++;
		}
		int at=0;
		for(i=0;i<=18000;i++){
			at+=verde[i];
			if(!nall && at<sinais)
				nall=1;
			if(at==sinais && nall)
				break;
		}
		if(at==sinais)
			printf("%02d:%02d:%02d\n", i/3600, (i%3600)/60, i%60);
		else
			printf("Signals fail to synchronise in 5 hours\n");
		scanf(" %d", &t);
	}
	return 0;
}

