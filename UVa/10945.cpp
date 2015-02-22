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
	int i, p;
	string s1, s;
	while(1){
		getline(cin, s1);
		if(s1=="DONE")
			break;
		s="";
		p=1;
		for(i=0;i<s1.length();i++){
			if(isalpha(s1[i])){
				s+=toupper(s1[i]);
			}
		}
		for(i=0;i<s.length()/2;i++){
			if(s[i]!=s[s.length()-1-i]){
				p=0;
				break;
			}
		}
		if(p)
			printf("You won't be eaten!\n");
		else
			printf("Uh oh..\n");
	}
	return 0;
}
