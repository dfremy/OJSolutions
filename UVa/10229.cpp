#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int pow2[21], n, k;

typedef struct{
	long long m[2][2];
} matriz;

void calcpow2(){
	pow2[0]=1;
	for(int i=1;i<21;i++)
		pow2[i]=pow2[i-1]*2;
}

matriz mult(matriz a, matriz b){
	matriz result;
	result.m[0][0]=((a.m[0][0]*b.m[0][0])%pow2[k] + (a.m[0][1]*b.m[1][0])%pow2[k]) % pow2[k];
    result.m[0][1]=((a.m[0][0]*b.m[0][1])%pow2[k] + (a.m[0][1]*b.m[1][1])%pow2[k]) % pow2[k];
    result.m[1][0]=((a.m[1][0]*b.m[0][0])%pow2[k] + (a.m[1][1]*b.m[1][0])%pow2[k]) % pow2[k];
    result.m[1][1]=((a.m[1][0]*b.m[0][1])%pow2[k] + (a.m[1][1]*b.m[1][1])%pow2[k]) % pow2[k];
	return result;
}

matriz exp(matriz termo, int n){
	if(n==1)
		return termo;
		
	matriz aux;
	
	if(n%2==0)
		aux = exp(termo, n/2);
	else
		aux = exp(termo, (n-1)/2);

    aux = mult(aux, aux);
    
	if(n%2){
    	aux = mult(aux, termo);
	}
	
	return aux;
}

long long fib(){
	if (n == 0)
        return 0;
    if (n == 1)
        return 1;
        
    matriz termo;
    termo.m[0][0] = termo.m[0][1] = termo.m[1][0] = 1;
    termo.m[1][1] = 0;
    
    termo = exp(termo, n-1);
    return termo.m[0][0];
}

int main()
{
	calcpow2();
	while(scanf(" %d %d", &n, &k)!=EOF){
		printf("%lld\n", fib());
	}
	return 0;
}

