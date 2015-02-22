#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, tam;
	char s[100005];
	while(gets(s) && !feof(stdin))
	{
		tam = strlen(s);
		
		for(i=tam-1; i>=0; i--)
			if(s[i]=='[')
				for(j=i+1; s[j]!=']' && s[j]!='[' && j<tam; j++)
					printf("%c", s[j]);
					
		for(i=0;s[i]!='[' && s[i]!=']';i++)
			printf("%c", s[i]);
			
		for(i=0;i<tam;i++)
			if(s[i]==']')
				for(j=i+1; s[j]!=']' && s[j]!='[' && j<tam;j++)
					printf("%c", s[j]);
		printf("\n");
	}
	return 0;
}
