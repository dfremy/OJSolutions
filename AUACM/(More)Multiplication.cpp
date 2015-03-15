#include <bits/stdc++.h>

using namespace std;

int qtcasas(int a) {
	int i = 0;
	while(a) {
		i++;
		a/=10;
	}
	return i;
}

void print(int a) {
	printf("| +");
	for(int i=0; i<a; ++i)
		printf("---+");
	printf(" |\n");
}

int casa(int num, int c) {
	int pot = pow(10, c-1);
	return (num/pot)%10;
}

int main() {
	int a, b, res;
	while(scanf(" %d %d", &a, &b)!=EOF && (a || b)) {
		res = a*b;
		int ja = 0;
		int qta = qtcasas(a), qtb = qtcasas(b), qtres = qtcasas(res);
		
		printf("+");
		int qt = qtcasas(a)*4+3;
		for(int i=0; i<qt; ++i)
			printf("-");
		printf("+\n");
		printf("|   ");
		int temp = pow(10, qta);
		for(int i=qta; i>0; --i) {
			printf("%d   ", casa(a,i));
			temp/=10;
		}
		printf("|\n");
		
		for(int i=qtb; i>0; --i) {
			print(qta);
			
			for(int k=0; k<3; ++k) {
					
				if(k==0 && ja)
					printf("|/|");
				else if(k==2 && qtres>=qta+i) {
					printf("|%d|", casa(res, qta+i));
					ja = 1;
				}
				else
					printf("| |");
					
				if(k==0) {
					for(int j=qta; j>0; --j)
						printf("%d /|", casa(a, j)*casa(b, i)/10);
				}
				if(k==1) {
					for(int j=qta; j>0; --j)
						printf(" / |");
				}
				if(k==2) {
					for(int j=qta; j>0; --j)
						printf("/ %d|", (casa(a, j)*casa(b, i))%10);
				}
				
				if(k==1)
					printf("%d|\n", casa(b, i));
				else
					printf(" |\n");
			}
		}
		print(qta);
		
		printf("|");
		if(ja)
			printf("/ ");
		else
			printf("  ");
		for(int i=qta; i>0; --i) {
			printf("%d ", casa(res, i));
			if(i!=1)
				printf("/ ");
			else
				printf("  ");
		}
		printf(" |\n");
		
		printf("+");
		for(int i=0; i<qt; ++i)
			printf("-");
		printf("+\n");
	}
	return 0;
}

