#include <bits/stdc++.h>

using namespace std;

int left(string s, int i) {
	if(i<0 || s[i]=='.')
		return 100;
	if(s[i] != '_')
		return 0;
	return left(s, i-1);
}

int right(string s, int i) {
	if(i==s.size() || s[i]=='.')
		return 100;
	if(s[i] != '_')
		return 0;
	return right(s, i+1);
}

int main() {
	string s;
	cin >> s;
	while(s!="#") {
		int n=0;
		for(int i=0; i<s.size(); ++i) {
			if(s[i] == '.')
				n+=100;
			if(s[i] == '/') {
				n += left(s, i-1);
			}
			if(s[i] == '\\') {
				n += right(s, i+1);
			}
			if(s[i] == '|') {
				n += left(s, i-1)/2;
				n += right(s, i+1)/2;
			}
		}
		printf("%d\n", n/s.size());
		
		cin >> s;
	}
	return 0;
}

