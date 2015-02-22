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

map <string, double> m;

int main() {
	int n, qt;
	string s;
	scanf(" %d ", &n);
	while(n--) {
		m.clear();
		qt = 0;
		while(getline(cin, s) && s[0] != '\0') {
			m[s]+=1;
			qt++;
		}
		for(map <string, double>::iterator it = m.begin(); it != m.end(); it++)
			printf("%s %.4lf\n", (it->first).c_str(), 100*(it->second)/qt);
		if(n)
			cout << endl;
	}
	return 0;
}

