#include <bits/stdc++.h>

using namespace std;

int calculaqtcasas(long long a) {
	int i = 0;
	
	while(a) {
		i++;
		a/=10;
	}
	
	return i;
}

void printtracos(long long a) {
	for(int i=0; i<a; ++i)
		printf("-");
	printf("\n");
}

void printespacos(long long a) {
	for(int i=0; i<a; ++i)
		printf(" ");
}

void printzeros(long long a) {
	for(int i=0; i<a; ++i)
		printf("0");
}

int main() {
	long long valor1, valor2, resposta, termo[6];
	int qtcasas[6], qtcasasvalor1, qtcasasvalor2, qtcasasresposta, problema = 1, zeros, printou;
	while(scanf(" %lld %lld", &valor1, &valor2)!=EOF && (valor1 || valor2)) {
		zeros = 0, printou = 0;
		
		for(int i=0; i<6; ++i) {
			termo[i] = 0;
		}
		
		resposta = valor1*valor2;
		
		qtcasasvalor1 = calculaqtcasas(valor1);
		qtcasasvalor2 = calculaqtcasas(valor2);
		qtcasasresposta = calculaqtcasas(resposta);
		
		long long numero = valor2;
		int indice = 0;
		while(numero) {
			termo[indice] = (numero%10)*valor1;
			qtcasas[indice] = calculaqtcasas(termo[indice]);
			indice++;
			numero/=10;
		}
		
		printf("Problem %d\n", problema++);
		printespacos(qtcasasresposta-qtcasasvalor1);
		printf("%lld\n", valor1);
		printespacos(qtcasasresposta-qtcasasvalor2);
		printf("%lld\n", valor2);
		printtracos(qtcasasresposta);
		
		for(int i=0; i<6; ++i) {
			if(termo[i]) {
				printespacos(qtcasasresposta-qtcasas[i]-i);
				printf("%lld", termo[i]);
				printzeros(zeros);
				printf("\n");
				zeros = 0;
				printou++;
			}
			else
				zeros++;
		}
		
		if(printou > 1) {
			printtracos(qtcasasresposta);
			printf("%lld\n", resposta);
		}
	}
	return 0;
}

