#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <iostream>
#include <cctype>

using namespace std;

vector <int> lib[1005], at;
int dep[1005];

int main(){
	int n, m, a, b, flag, i;
	while(scanf(" %d %d", &n, &m)!=EOF && n){
		for(i=0;i<1001;i++)
			lib[i].clear();
		memset(dep, 0, sizeof(dep));
		flag=0;
		for(i=0;i<m;i++){
			scanf(" %d %d", &a, &b);
			dep[b]++;
			lib[a].push_back(b);
		}
		for(i=0;i<n;i++){
			at.clear();
			for(int j=1;j<=n;j++){
				if(!dep[j])
					at.push_back(j);
			}
			if(at.size()>1)
				flag=1;
			else if(at.size()==0)
				break;
			int novo = at[0];
			dep[novo]=100;
			for(int j=0;j<lib[novo].size();j++)
				dep[lib[novo][j]]--;
		}
		if(i!=n)
			printf("0\n");
		else if(flag)
			printf("2\n");
		else
			printf("1\n");
	}
	return 0;
}
