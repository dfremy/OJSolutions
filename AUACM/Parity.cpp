#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	while(s != "#") {
		int n=0;
		for(int i=0; i<s.size()-1; ++i) {
			n+=(s[i]=='1');
			printf("%c", s[i]);
		}
		if( (s[s.size()-1]=='e' && n%2) || (s[s.size()-1]=='o' && n%2==0) )
			printf("1\n");
		else
			printf("0\n");
		
		cin >> s;
	}
	return 0;
}

