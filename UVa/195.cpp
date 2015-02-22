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

vector <char> letras, ch;
char id[256];

void back(vector <char> letras){
	do {
		for(int i = 0; i < letras.size(); i++)
    		printf("%c", ch[letras[i]]);
    	printf("\n");
	} while ( next_permutation(letras.begin(),letras.end()) );
}

int main(){
	int i, j, n;
	char c;
	string s;
	scanf(" %d ", &n);
	for(int i=0; i < 26; i++) {
		ch.push_back('A'+i);
		ch.push_back('a'+i);
		id['A'+i] = 2*i;
		id['a'+i] = 2*i+1;
	}
	for(i=0;i<n;i++){
		letras.clear();
		getline(cin, s);
		for(j=0;j<s.length();j++){
			letras.push_back(id[s[j]]);
		}
		sort(letras.begin(), letras.end());
		back(letras);
	}
	return 0;
}

