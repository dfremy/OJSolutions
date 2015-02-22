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
	int n, k;
	string a, s;
	scanf(" %d ", &n);
	for(int i = 0; i < n; i++) {
		bool flag = true;
		getline(cin, a);
		s = "";
		for(int j = 0; j < a.size(); j++)
			if(isalpha(a[j]))
				s += a[j];
		int k = (int) sqrt(s.size()), tam = s.size();
		printf("Case #%d:\n", i+1);
		if(k * k != tam)
			flag = false;
		for(int i = 0; i < k * k && flag; i++)
			if(s[i] != s[tam-1-i] || s[i] != s[i/k+i%k*k])
				flag = false;
		if(flag)
			printf("%d\n", k);
		else
			printf("No magic :(\n");
	}
	return 0;
}

