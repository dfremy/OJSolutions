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

map <string, int> tem;
vector <string> vai;

int main() {
	int qt = 0;
	char s[100];
	string a[2000], b;
	while(scanf(" %s ", s) != EOF && s[0] != '#') {
		a[qt] = string(s);
		b = a[qt];
		transform(b.begin(), b.end(), b.begin(), ::tolower);
		sort(b.begin(), b.end());
		tem[b]++;
		qt++;
	}
	for(int i = 0; i < qt; i++) {
		b = a[i];
		transform(b.begin(), b.end(), b.begin(), ::tolower);
		sort(b.begin(), b.end());
		if(tem[b]==1)
			vai.push_back(a[i]);
	}
	sort(vai.begin(), vai.end());
	for(int i = 0; i < vai.size(); i++)
		cout << vai[i] << endl;	
	return 0;
}

