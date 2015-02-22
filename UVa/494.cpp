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
	int qt, vale, i;
	char s[5000];
	while(gets(s)){
		i = qt = 0;
		while(i<strlen(s)){
			while(!isalpha(s[i]))
				i++;
			if(i<strlen(s))
				qt++;
			while(isalpha(s[i]))
				i++;
		}
		printf("%d\n", qt);
	}

	return 0;
}

