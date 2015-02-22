#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <map>
#include <vector>
#include <iostream>
#include <stack>

#define MAXV 1000000000

using namespace std;

char com[100005][10];
long long num[100005];
int qt;

void resolve(long long val){
	stack <long long> pilha;
	pilha.push(val);
	long long a, b;
	for(int i=0;i<qt;i++){
		if(com[i][0]=='N')
			pilha.push(num[i]);
		else if(com[i][0]=='P'){
			if(!pilha.empty())
				pilha.pop();
			else{
				printf("ERROR\n");
				return;
			}
		}
		else if(com[i][0]=='I'){
			if(!pilha.empty()){
				a=pilha.top();
				pilha.pop();
				pilha.push(-a);
			}
			else{
				printf("ERROR\n");
				return;
			}
		}
		else if(com[i][0]=='D' && com[i][1]=='U'){
			if(!pilha.empty())
				pilha.push(pilha.top());
			else{
				printf("ERROR\n");
				return;
			}
		}
		else if(com[i][0]=='S' && com[i][1]=='W'){
			if(pilha.size()>1){
				a=pilha.top();
				pilha.pop();
				b=pilha.top();
				pilha.pop();
				pilha.push(a);
				pilha.push(b);
			}
			else{
				printf("ERROR\n");
				return;
			}
		}
		else if(com[i][0]=='A'){
			if(pilha.size()>1){
				a=pilha.top();
				pilha.pop();
				b=pilha.top();
				pilha.pop();
				if(abs(b+a)>MAXV){
					printf("ERROR\n");
					return;
				}
				pilha.push(b+a);
			}
			else{
				printf("ERROR\n");
				return;
			}
		}
		else if(com[i][0]=='S' && com[i][1]=='U'){
			if(pilha.size()>1){
				a=pilha.top();
				pilha.pop();
				b=pilha.top();
				pilha.pop();
				if(abs(b-a)>MAXV){
					printf("ERROR\n");
					return;
				}
				pilha.push(b-a);
			}
			else{
				printf("ERROR\n");
				return;
			}
		}
		else if(com[i][0]=='M' && com[i][1]=='U'){
			if(pilha.size()>1){
				a=pilha.top();
				pilha.pop();
				b=pilha.top();
				pilha.pop();
				if(abs(a*b)>MAXV){
					printf("ERROR\n");
					return;
				}
				pilha.push(a*b);
			}
			else{
				printf("ERROR\n");
				return;
			}
		}
		else if(com[i][0]=='D' && com[i][1]=='I'){
			if(pilha.size()>1){
				a=pilha.top();
				pilha.pop();
				b=pilha.top();
				pilha.pop();
				if(!a){
					printf("ERROR\n");
					return;
				}
				pilha.push(b/a);
			}
			else{
				printf("ERROR\n");
				return;
			}
		}
		else if(com[i][0]=='M' && com[i][1]=='O'){
			if(pilha.size()>1){
				a=pilha.top();
				pilha.pop();
				b=pilha.top();
				pilha.pop();
				if(!a){
					printf("ERROR\n");
					return;
				}
				pilha.push(b%a);
			}
			else{
				printf("ERROR\n");
				return;
			}
		}	
	}
	if(pilha.size()==1)
		printf("%lld\n", pilha.top());
	else
		printf("ERROR\n");
	return;
}

int main(){
	long long valor;
	int n, flag=0;
	while(1){
		for(int i=0;;i++){
			scanf("%s", com[i]);
			if(com[i][0]=='Q'){
				flag=1;
				break;
			}
			if(com[i][0]=='E'){
				qt=i;
				break;
			}
			if(com[i][0]=='N')
				scanf(" %lld", &num[i]);
		}
		if(flag)
			break;
		scanf(" %d", &n);
		for(int i=0;i<n;i++){
			scanf(" %lld", &valor);
			resolve(valor);
		}
		printf("\n");
	}
	return 0;
}
