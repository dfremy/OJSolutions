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

int main(){
	int n, num;
	scanf(" %d", &n);
	while(n--){
		scanf(" %d", &num);
		num = num*315 + 36962;
		printf("%d\n", abs((num/10)%10));
	}

	return 0;
}

