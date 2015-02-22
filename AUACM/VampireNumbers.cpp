#include <bits/stdc++.h>
 
using namespace std;
 
inline bool compare(int a, int b) {
	int amountOfDigits = 0;
	char dig[10] = {0,0,0,0,0,0,0,0,0,0};
 
	for (int c = a*b; c; c /= 10)
		dig[c%10]++, amountOfDigits++;
 
	for (int i = 0; i < 2; i++) {
		for (; a; a /= 10)
			if (!amountOfDigits-- || !dig[a%10]--)
				return false;
		a = b;
	}
 
	return !amountOfDigits;
}
 
int main() {
	int d;
	set<int> s;
 
	for (int i = 1; i <= 1050; i++)
		for (int j = i; i*j <= 1000300; j++)
			if (compare(i, j))
				s.insert(i*j);
	while (scanf(" %d", &d) != EOF && d)
		printf("%d\n", *s.lower_bound(d));
	return 0;
}
