#include <stdio.h>

using namespace std;

int main(){
	long long tes, n;
	long long i;
	scanf(" %lld", &tes);
	while(tes--){
		scanf(" %lld", &n);
		long long soma=0;
		for(i=1; i*i<=n ;i++)
			soma += n/i;
		for(long long j = n/i ; j>0 ; j--){
			soma += j * ( n/j - ( n/(j+1) ) );
		}
		printf("%lld\n", soma);
	}
	return 0;
}
