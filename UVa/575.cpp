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

long long p2[35];

void pow2(){
	p2[0]=1;
	for(int i=1;i<35;i++){
		p2[i]=2*p2[i-1];
	}
}

int main(){
	int i;
	long long n;
	string s;
	pow2();
	while(1){
		cin >> s;
		if(s=="0")
			break;
		n=0;
		for(i=0;i<s.length();i++){
			n+=(p2[s.length()-i]-1)*(s[i]-'0');
		}
		printf("%lld\n", n);
	}

	return 0;
}

