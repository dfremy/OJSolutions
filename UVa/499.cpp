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

map <char, int> tem;

int main(){
	int i, resp;
	char s[5000];
	string cr;
	while(gets(s)){
		tem.clear();
		resp=0;
		for(i=0;i<strlen(s);i++){
			if(isalpha(s[i])){
				if(++tem[s[i]]==resp)
					cr+=s[i];
				if(tem[s[i]]>resp){
					cr=s[i];
					resp = tem[s[i]];
				}
			}
		}
		sort(cr.begin(), cr.end());
		cout << cr;
		printf(" %d\n", resp);
	}

	return 0;
}

