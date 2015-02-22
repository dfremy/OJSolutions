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

int main() {
	int n;
	string s2;
	while(getline(cin, s2) && s2[0] != '#') {
		string s = s2;
		sort(s.begin(), s.end());
		next_permutation(s2.begin(), s2.end());
		if(s == s2)
			cout << "No Successor" << endl;
		else
			cout << s2 << endl;
	}
	return 0;
}

