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

vector <int> salario;

int main(){
	int n, a, b, c;
	scanf(" %d", &n);
	for(int i=1;i<=n;i++){
		salario.clear();
		scanf(" %d %d %d", &a, &b, &c);
		salario.push_back(a);
		salario.push_back(b);
		salario.push_back(c);
		sort(salario.begin(), salario.end());
		printf("Case %d: %d\n", i, salario[1]);
	}

	return 0;
}

