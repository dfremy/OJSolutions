#include <stdio.h>
#include <string.h>

using namespace std;

char s[1000005];
int i, j, tam, erro;

int resolve()
{
	for(i=0;(i+1)*2<=tam; i++)
	{
		erro=0;
		if( !(tam%(i+1)) )
			for(j=i+1;j<tam;j++)
				if(s[j%(i+1)]!=s[j])
				{
					erro=1;
					break;
				}
		if(j>=tam && erro==0)
		{
			return tam/(i+1);
		}
	}
	return 1;
}

int main()
{
	while(1)
	{
		scanf(" %s", s);
		tam = strlen(s);
		if(tam==1 && s[0]=='.')
			break;
		printf("%d\n", resolve());
	}
	return 0;
}
