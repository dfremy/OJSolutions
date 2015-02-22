#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, fail;
	map <char, char> m;
	string in;
	cin >> in;
	
	for(char c='a'; c<='z'; c++) {
		m[c] = 'a';
	}
	m['b']='d';
	m['d']='b';
	
	m['p']='q';
	m['q']='p';
	
	m['i']='i';
	m['o']='o';
	m['v']='v';
	m['w']='w';
	m['x']='x';
	
	while(in!="#") {
		string ans = "";
		fail = 0;
		for(int i=in.size()-1; i>=0; i--) {
			if(m[in[i]]!='a')
				ans+=m[in[i]];
			else {
				fail = 1;
				break;
			}
		}
		if(fail)
			printf("INVALID\n");
		else
			cout << ans << endl;
		cin >> in;
	}
	return 0;
}

