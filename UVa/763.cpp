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

using namespace std;

int num[111];
char num1[111], num2[111];

void soma(){
	int i=0;
	int tam1 = strlen(num1), tam2 = strlen(num2);
	while(i<tam1 && i<tam2){
		num[i] = num1[tam1-i-1] + num2[tam2-i-1] - 2*'0';
		i++;
	}
	if(i<tam1){
		while(i<tam1){
			num[i] = num1[tam1-i-1] - '0';
			i++;
		}
	}
	else if(i<tam2){
		while(i<tam2){
			num[i] = num2[tam2-i-1] - '0';
			i++;
		}
	}
}

int main(){
	int i, j, tes=0, mudou;
	while(scanf(" %s %s", num1, num2)!=EOF){
		if(tes)
			printf("\n");
		memset(num, 0, sizeof(num));
		soma();
		mudou=1;
		while(1){
			if(!mudou)
				break;
			mudou=0;
			for(i=0;i<110;i++){
				if(num[i]>1){
					mudou=1;
					num[i+1]++;
					if(i==1)
						num[0]++;
					else if(i!=0)
						num[i-2]++;
					num[i]-=2;
				}
				if(num[i]>0 && num[i+1]>0){
					mudou=1;
					num[i+2]++;
					num[i+1]--;
					num[i]--;
				}
			}
		}
		for(i=110;i>0 && !num[i];i--);
		for( ; i>=0 ;i--)
			printf("%d", num[i]);
		printf("\n");
		tes++;
	}

	return 0;
}

