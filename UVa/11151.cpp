#include <stdio.h>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

int pd[1050][1050], ja[1050][1050];
string s;

int longPalind(int l, int r){
	if(l==r)
		return 1;
	if(l>r)
		return 0;
	if(ja[l][r])
		return pd[l][r];
	if(s[l]==s[r])
		pd[l][r] = 2 + longPalind(l+1, r-1);
	else
		pd[l][r] = max(longPalind(l+1, r), longPalind(l, r-1));
	ja[l][r]=1;
	return pd[l][r];
}

string myscan(){
	string a="";
	char c;
	while(1){
		scanf("%c", &c);
		if(c=='\n')
			break;
		a+=c;
	}
	return a;
}

int main(){
	int n;
	scanf(" %d", &n);
	getchar();
	while(n--){
		memset(pd, 0, sizeof(pd));
		memset(ja, 0, sizeof(ja));
		s = myscan();
		printf("%d\n", longPalind(0, s.size()-1));
	}
	return 0;
}
