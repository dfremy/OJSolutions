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

int main(){
	int qt=0;
	char s[5000];
	while(scanf(" %s", s)!=EOF){
		for(int i=0;i<strlen(s);i++){
			if(s[i]=='"'){
				if(qt%2)
					printf("''");
				else
					printf("``");
				qt++;
			}
			else
				printf("%c", s[i]);
		}
		printf("\n");
	}

	return 0;
}

