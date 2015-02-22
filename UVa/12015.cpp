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

vector <string> relev[105];

int main(){
	int i, j, n, d, maior;
	string s;
	scanf(" %d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<101;j++)
			relev[j].clear();
		maior=0;
		for(j=0;j<10;j++){
			cin >> s;
			scanf(" %d", &d);
			relev[d].push_back(s);
			maior = max(maior, d);
		}
		printf("Case #%d:\n", i);
		for(j=0;j<relev[maior].size();j++)
			cout<<relev[maior][j]<<endl;
	}
	return 0;
}

