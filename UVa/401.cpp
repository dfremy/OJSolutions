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

map <char, char> rev;

int main(){
	int i, j, tam, m, p;
	char s[10000];
	rev['A']='A';
	rev['E']='3';
	rev['H']='H';
	rev['I']='I';
	rev['J']='L';
	rev['L']='J';
	rev['M']='M';
	rev['O']='O';
	rev['S']='2';
	rev['T']='T';
	rev['U']='U';
	rev['V']='V';
	rev['W']='W';
	rev['X']='X';
	rev['Y']='Y';
	rev['Z']='5';
	rev['1']='1';
	rev['2']='S';
	rev['3']='E';
	rev['5']='Z';
	rev['8']='8';
	while(scanf(" %s", s)!=EOF){
		m=p=1;
		tam = strlen(s)-1;
		for(i=0;i<=tam-i;i++){
			if(s[i]!=s[tam-i])
				p=0;
			if(rev[s[i]]!=s[tam-i])
				m=0;
		}
		if(m)
			if(p)
				printf("%s -- is a mirrored palindrome.\n\n", s);
			else
				printf("%s -- is a mirrored string.\n\n", s);
		else
			if(p)
				printf("%s -- is a regular palindrome.\n\n", s);
			else
				printf("%s -- is not a palindrome.\n\n", s);
	}

	return 0;
}

