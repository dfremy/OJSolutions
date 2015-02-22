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
	int  resp, n;
	char c[12];
	while(gets(c) && (strlen(c)>1 || c[strlen(c)-1]!='0')){
		resp=0;
		for(int i=0;i<strlen(c);i++){
			resp += c[i]-'0';
			if(resp>9)
				resp = resp%10 + resp/10;
		}
		printf("%d\n", resp);
	}

	return 0;
}

