#include <stdio.h>
#include <queue>
#include <stack>

using namespace std;

queue <int> fila;
stack <int> pilha;
priority_queue <int> pfila;

int n, op, val, f, pf, p, st;

int main()
{
	while(scanf(" %d", &n)!=EOF)
	{
		while(!fila.empty())
			fila.pop();
		while(!pilha.empty())
			pilha.pop();
		while(!pfila.empty())
			pfila.pop();
		st = 0;
		f = pf = p = 1;
		while(n--)
		{
			scanf(" %d %d", &op, &val);
			if(op==1)
			{
				fila.push(val);
				pilha.push(val);
				pfila.push(val);
			}
			if(op==2)
			{
				if(pilha.empty())
					p = f = pf = 0;
				else
				{
					if(val!=pilha.top() || pilha.empty())
						p=0;
					if(val!=fila.front() || fila.empty())
						f=0;
					if(val!=pfila.top() || pfila.empty())
						pf=0;
					pfila.pop();
					fila.pop();
					pilha.pop();
				}
			}
		}
		if(p+f+pf>1)
			printf("not sure\n");
		else if(p+f+pf<1)
			printf("impossible\n");
		else
		{
			if(p)
				printf("stack\n");
			if(f)
				printf("queue\n");
			if(pf)
				printf("priority queue\n");
		}
	}
	return 0;
}
