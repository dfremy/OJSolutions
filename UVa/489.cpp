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

map <char, int> foi, tem;

int main(){
	int i, j, n, erro, letras, acertou,errou;
	char s[10000];
	while(scanf(" %d", &n)!=EOF && n!=-1){
		foi.clear();
		tem.clear();
		erro=letras=acertou=errou=0;
		scanf("%s", s);
		for(i=0;s[i]!='\0';i++){
			if(!tem[s[i]]){
				letras++;
			}
			tem[s[i]]=1;
		}
		scanf("%s", s);
		for(i=0;s[i]!='\0';i++){
			if(!foi[s[i]]){
				foi[s[i]]=1;
				if(tem[s[i]]){
					acertou++;
				}
				else{
					errou++;
				}
			}
			if(acertou==letras || errou==7)
				break;
		}
		printf("Round %d\n", n);
		if(acertou==letras)
			printf("You win.\n");
		else if(errou==7)
			printf("You lose.\n");
		else
			printf("You chickened out.\n");
	}
	return 0;
}

