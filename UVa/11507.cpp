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

map < pair < string, string>, string > novo;

void atribui(){
	novo[make_pair("+y", "+x")] = "+y";
	novo[make_pair("-y", "+x")] = "-y";
	novo[make_pair("+y", "-x")] = "-y";
	novo[make_pair("-y", "-x")] = "+y";

	novo[make_pair("+y", "+y")] = "-x";
	novo[make_pair("-y", "+y")] = "+x";
	novo[make_pair("+y", "-y")] = "+x";
	novo[make_pair("-y", "-y")] = "-x";

	novo[make_pair("+y", "+z")] = "+z";
	novo[make_pair("-y", "+z")] = "+z";
	novo[make_pair("+y", "-z")] = "-z";
	novo[make_pair("-y", "-z")] = "-z";

	novo[make_pair("+z", "+x")] = "+z";
	novo[make_pair("-z", "+x")] = "-z";
	novo[make_pair("+z", "-x")] = "-z";
	novo[make_pair("-z", "-x")] = "+z";

	novo[make_pair("+z", "+y")] = "+y";
	novo[make_pair("-z", "+y")] = "+y";
	novo[make_pair("+z", "-y")] = "-y";
	novo[make_pair("-z", "-y")] = "-y";

	novo[make_pair("+z", "+z")] = "-x";
	novo[make_pair("-z", "+z")] = "+x";
	novo[make_pair("+z", "-z")] = "+x";
	novo[make_pair("-z", "-z")] = "-x";
}

int main(){
	int i, j, n;
	atribui();
	string res, at;
	while(scanf(" %d", &n)!=EOF && n){
		res="+x";
		for(i=1;i<n;i++){
			cin>>at;
			if(at!="No")
				res = novo[make_pair(at, res)];
		}
		cout<<res<<endl;
	}
	return 0;
}

